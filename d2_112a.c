#include "common.h"
#include <patch.h>
#include <limits.h>

#include "d2.h"
#include "dmgclamp.h"

static STDCALL int div64_clamp32(int hi_a, unsigned int lo_a, int hi_b, unsigned int lo_b);

#define HEADER "d2_112a_common.h"
#define NAME d2common_112a
#include "declPatch.h"

#define HEADER "d2_112a_game.h"
#define NAME d2game_112a
#include "declPatch.h"

#define HEADER "d2_112a_client.h"
#define NAME d2client_112a
#include "declPatch.h"

static STDCALL int div64_clamp32(int hi_a, unsigned int lo_a, int hi_b, unsigned int lo_b)
{
	long long a = lo_a | ((long long)hi_a << 32);
	long long b = lo_b | ((long long)hi_b << 32);
	a /= b;
	if (a < INT_MIN) a = INT_MIN;
	else if (a > INT_MAX) a = INT_MAX;
	return (int)a;
}

int patch_112a(void)
{
	int ret;
	if ((ret = patch_d2common_112a())) goto err_common;
	if ((ret = patch_d2game_112a())) goto err_game;
	if ((ret = patch_d2client_112a())) goto err_client;
	return 0;

err_client:
	unpatch_d2game_112a();
err_game:
	unpatch_d2common_112a();
err_common:
	return ret;
}

void unpatch_112a(void)
{
	unpatch_d2client_112a();
	unpatch_d2game_112a();
	unpatch_d2common_112a();
}
