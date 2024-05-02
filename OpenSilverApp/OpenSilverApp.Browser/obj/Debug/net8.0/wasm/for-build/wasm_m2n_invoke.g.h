/*
* GENERATED FILE, DON'T EDIT
* Generated by InterpToNativeGenerator
*/

#include "pinvoke.h"
#include <stdlib.h>
static void
wasm_invoke_ii (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef int (*T)(int arg_0);
	T func = (T)target_func;
	int res = func (mono_wasm_interp_method_args_get_iarg (margs, 0));
	void *retval = mono_wasm_interp_method_args_get_retval (margs);
	*(int*)retval = res;
}

static void
wasm_invoke_iiii (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef int (*T)(int arg_0, int arg_1, int arg_2);
	T func = (T)target_func;
	int res = func (mono_wasm_interp_method_args_get_iarg (margs, 0), mono_wasm_interp_method_args_get_iarg (margs, 1), mono_wasm_interp_method_args_get_iarg (margs, 2));
	void *retval = mono_wasm_interp_method_args_get_retval (margs);
	*(int*)retval = res;
}

static void
wasm_invoke_iii (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef int (*T)(int arg_0, int arg_1);
	T func = (T)target_func;
	int res = func (mono_wasm_interp_method_args_get_iarg (margs, 0), mono_wasm_interp_method_args_get_iarg (margs, 1));
	void *retval = mono_wasm_interp_method_args_get_retval (margs);
	*(int*)retval = res;
}

static void
wasm_invoke_iiiiiii (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef int (*T)(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5);
	T func = (T)target_func;
	int res = func (mono_wasm_interp_method_args_get_iarg (margs, 0), mono_wasm_interp_method_args_get_iarg (margs, 1), mono_wasm_interp_method_args_get_iarg (margs, 2), mono_wasm_interp_method_args_get_iarg (margs, 3), mono_wasm_interp_method_args_get_iarg (margs, 4), mono_wasm_interp_method_args_get_iarg (margs, 5));
	void *retval = mono_wasm_interp_method_args_get_retval (margs);
	*(int*)retval = res;
}

static void
wasm_invoke_iiliiil (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef int (*T)(int arg_0, int64_t arg_1, int arg_2, int arg_3, int arg_4, int64_t arg_5);
	T func = (T)target_func;
	int res = func (mono_wasm_interp_method_args_get_iarg (margs, 0), mono_wasm_interp_method_args_get_larg (margs, 1), mono_wasm_interp_method_args_get_iarg (margs, 3), mono_wasm_interp_method_args_get_iarg (margs, 4), mono_wasm_interp_method_args_get_iarg (margs, 5), mono_wasm_interp_method_args_get_larg (margs, 6));
	void *retval = mono_wasm_interp_method_args_get_retval (margs);
	*(int*)retval = res;
}

static void
wasm_invoke_iil (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef int (*T)(int arg_0, int64_t arg_1);
	T func = (T)target_func;
	int res = func (mono_wasm_interp_method_args_get_iarg (margs, 0), mono_wasm_interp_method_args_get_larg (margs, 1));
	void *retval = mono_wasm_interp_method_args_get_retval (margs);
	*(int*)retval = res;
}

static void
wasm_invoke_iili (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef int (*T)(int arg_0, int64_t arg_1, int arg_2);
	T func = (T)target_func;
	int res = func (mono_wasm_interp_method_args_get_iarg (margs, 0), mono_wasm_interp_method_args_get_larg (margs, 1), mono_wasm_interp_method_args_get_iarg (margs, 3));
	void *retval = mono_wasm_interp_method_args_get_retval (margs);
	*(int*)retval = res;
}

static void
wasm_invoke_li (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef int64_t (*T)(int arg_0);
	T func = (T)target_func;
	int64_t res = func (mono_wasm_interp_method_args_get_iarg (margs, 0));
	void *retval = mono_wasm_interp_method_args_get_retval (margs);
	*(int64_t*)retval = res;
}

static void
wasm_invoke_iiiii (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef int (*T)(int arg_0, int arg_1, int arg_2, int arg_3);
	T func = (T)target_func;
	int res = func (mono_wasm_interp_method_args_get_iarg (margs, 0), mono_wasm_interp_method_args_get_iarg (margs, 1), mono_wasm_interp_method_args_get_iarg (margs, 2), mono_wasm_interp_method_args_get_iarg (margs, 3));
	void *retval = mono_wasm_interp_method_args_get_retval (margs);
	*(int*)retval = res;
}

static void
wasm_invoke_iiiiii (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef int (*T)(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4);
	T func = (T)target_func;
	int res = func (mono_wasm_interp_method_args_get_iarg (margs, 0), mono_wasm_interp_method_args_get_iarg (margs, 1), mono_wasm_interp_method_args_get_iarg (margs, 2), mono_wasm_interp_method_args_get_iarg (margs, 3), mono_wasm_interp_method_args_get_iarg (margs, 4));
	void *retval = mono_wasm_interp_method_args_get_retval (margs);
	*(int*)retval = res;
}

static void
wasm_invoke_i (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef int (*T)(void);
	T func = (T)target_func;
	int res = func ();
	void *retval = mono_wasm_interp_method_args_get_retval (margs);
	*(int*)retval = res;
}

static void
wasm_invoke_vii (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef void (*T)(int arg_0, int arg_1);
	T func = (T)target_func;
	func (mono_wasm_interp_method_args_get_iarg (margs, 0), mono_wasm_interp_method_args_get_iarg (margs, 1));
}

static void
wasm_invoke_vi (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef void (*T)(int arg_0);
	T func = (T)target_func;
	func (mono_wasm_interp_method_args_get_iarg (margs, 0));
}

static void
wasm_invoke_iiiiiiii (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef int (*T)(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5, int arg_6);
	T func = (T)target_func;
	int res = func (mono_wasm_interp_method_args_get_iarg (margs, 0), mono_wasm_interp_method_args_get_iarg (margs, 1), mono_wasm_interp_method_args_get_iarg (margs, 2), mono_wasm_interp_method_args_get_iarg (margs, 3), mono_wasm_interp_method_args_get_iarg (margs, 4), mono_wasm_interp_method_args_get_iarg (margs, 5), mono_wasm_interp_method_args_get_iarg (margs, 6));
	void *retval = mono_wasm_interp_method_args_get_retval (margs);
	*(int*)retval = res;
}

static void
wasm_invoke_viiiii (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef void (*T)(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4);
	T func = (T)target_func;
	func (mono_wasm_interp_method_args_get_iarg (margs, 0), mono_wasm_interp_method_args_get_iarg (margs, 1), mono_wasm_interp_method_args_get_iarg (margs, 2), mono_wasm_interp_method_args_get_iarg (margs, 3), mono_wasm_interp_method_args_get_iarg (margs, 4));
}

static void
wasm_invoke_viiii (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef void (*T)(int arg_0, int arg_1, int arg_2, int arg_3);
	T func = (T)target_func;
	func (mono_wasm_interp_method_args_get_iarg (margs, 0), mono_wasm_interp_method_args_get_iarg (margs, 1), mono_wasm_interp_method_args_get_iarg (margs, 2), mono_wasm_interp_method_args_get_iarg (margs, 3));
}

static void
wasm_invoke_l (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef int64_t (*T)(void);
	T func = (T)target_func;
	int64_t res = func ();
	void *retval = mono_wasm_interp_method_args_get_retval (margs);
	*(int64_t*)retval = res;
}

static void
wasm_invoke_iiil (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef int (*T)(int arg_0, int arg_1, int64_t arg_2);
	T func = (T)target_func;
	int res = func (mono_wasm_interp_method_args_get_iarg (margs, 0), mono_wasm_interp_method_args_get_iarg (margs, 1), mono_wasm_interp_method_args_get_larg (margs, 2));
	void *retval = mono_wasm_interp_method_args_get_retval (margs);
	*(int*)retval = res;
}

static void
wasm_invoke_di (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef double (*T)(int arg_0);
	T func = (T)target_func;
	double res = func (mono_wasm_interp_method_args_get_iarg (margs, 0));
	void *retval = mono_wasm_interp_method_args_get_retval (margs);
	*(double*)retval = res;
}

static void
wasm_invoke_iilli (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef int (*T)(int arg_0, int64_t arg_1, int64_t arg_2, int arg_3);
	T func = (T)target_func;
	int res = func (mono_wasm_interp_method_args_get_iarg (margs, 0), mono_wasm_interp_method_args_get_larg (margs, 1), mono_wasm_interp_method_args_get_larg (margs, 3), mono_wasm_interp_method_args_get_iarg (margs, 5));
	void *retval = mono_wasm_interp_method_args_get_retval (margs);
	*(int*)retval = res;
}

static void
wasm_invoke_lili (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef int64_t (*T)(int arg_0, int64_t arg_1, int arg_2);
	T func = (T)target_func;
	int64_t res = func (mono_wasm_interp_method_args_get_iarg (margs, 0), mono_wasm_interp_method_args_get_larg (margs, 1), mono_wasm_interp_method_args_get_iarg (margs, 3));
	void *retval = mono_wasm_interp_method_args_get_retval (margs);
	*(int64_t*)retval = res;
}

static void
wasm_invoke_iill (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef int (*T)(int arg_0, int64_t arg_1, int64_t arg_2);
	T func = (T)target_func;
	int res = func (mono_wasm_interp_method_args_get_iarg (margs, 0), mono_wasm_interp_method_args_get_larg (margs, 1), mono_wasm_interp_method_args_get_larg (margs, 3));
	void *retval = mono_wasm_interp_method_args_get_retval (margs);
	*(int*)retval = res;
}

static void
wasm_invoke_iiiil (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef int (*T)(int arg_0, int arg_1, int arg_2, int64_t arg_3);
	T func = (T)target_func;
	int res = func (mono_wasm_interp_method_args_get_iarg (margs, 0), mono_wasm_interp_method_args_get_iarg (margs, 1), mono_wasm_interp_method_args_get_iarg (margs, 2), mono_wasm_interp_method_args_get_larg (margs, 3));
	void *retval = mono_wasm_interp_method_args_get_retval (margs);
	*(int*)retval = res;
}

static void
wasm_invoke_liiil (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef int64_t (*T)(int arg_0, int arg_1, int arg_2, int64_t arg_3);
	T func = (T)target_func;
	int64_t res = func (mono_wasm_interp_method_args_get_iarg (margs, 0), mono_wasm_interp_method_args_get_iarg (margs, 1), mono_wasm_interp_method_args_get_iarg (margs, 2), mono_wasm_interp_method_args_get_larg (margs, 3));
	void *retval = mono_wasm_interp_method_args_get_retval (margs);
	*(int64_t*)retval = res;
}

static void
wasm_invoke_viii (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef void (*T)(int arg_0, int arg_1, int arg_2);
	T func = (T)target_func;
	func (mono_wasm_interp_method_args_get_iarg (margs, 0), mono_wasm_interp_method_args_get_iarg (margs, 1), mono_wasm_interp_method_args_get_iarg (margs, 2));
}

static void
wasm_invoke_viiiiii (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef void (*T)(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5);
	T func = (T)target_func;
	func (mono_wasm_interp_method_args_get_iarg (margs, 0), mono_wasm_interp_method_args_get_iarg (margs, 1), mono_wasm_interp_method_args_get_iarg (margs, 2), mono_wasm_interp_method_args_get_iarg (margs, 3), mono_wasm_interp_method_args_get_iarg (margs, 4), mono_wasm_interp_method_args_get_iarg (margs, 5));
}

static void
wasm_invoke_viiiiiii (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef void (*T)(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5, int arg_6);
	T func = (T)target_func;
	func (mono_wasm_interp_method_args_get_iarg (margs, 0), mono_wasm_interp_method_args_get_iarg (margs, 1), mono_wasm_interp_method_args_get_iarg (margs, 2), mono_wasm_interp_method_args_get_iarg (margs, 3), mono_wasm_interp_method_args_get_iarg (margs, 4), mono_wasm_interp_method_args_get_iarg (margs, 5), mono_wasm_interp_method_args_get_iarg (margs, 6));
}

static void
wasm_invoke_iiiiiiiii (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef int (*T)(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5, int arg_6, int arg_7);
	T func = (T)target_func;
	int res = func (mono_wasm_interp_method_args_get_iarg (margs, 0), mono_wasm_interp_method_args_get_iarg (margs, 1), mono_wasm_interp_method_args_get_iarg (margs, 2), mono_wasm_interp_method_args_get_iarg (margs, 3), mono_wasm_interp_method_args_get_iarg (margs, 4), mono_wasm_interp_method_args_get_iarg (margs, 5), mono_wasm_interp_method_args_get_iarg (margs, 6), mono_wasm_interp_method_args_get_iarg (margs, 7));
	void *retval = mono_wasm_interp_method_args_get_retval (margs);
	*(int*)retval = res;
}

static void
wasm_invoke_iiiiiiiiii (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef int (*T)(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5, int arg_6, int arg_7, int arg_8);
	T func = (T)target_func;
	int res = func (mono_wasm_interp_method_args_get_iarg (margs, 0), mono_wasm_interp_method_args_get_iarg (margs, 1), mono_wasm_interp_method_args_get_iarg (margs, 2), mono_wasm_interp_method_args_get_iarg (margs, 3), mono_wasm_interp_method_args_get_iarg (margs, 4), mono_wasm_interp_method_args_get_iarg (margs, 5), mono_wasm_interp_method_args_get_iarg (margs, 6), mono_wasm_interp_method_args_get_iarg (margs, 7), mono_wasm_interp_method_args_get_iarg (margs, 8));
	void *retval = mono_wasm_interp_method_args_get_retval (margs);
	*(int*)retval = res;
}

static void
wasm_invoke_viiiiiiii (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef void (*T)(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5, int arg_6, int arg_7);
	T func = (T)target_func;
	func (mono_wasm_interp_method_args_get_iarg (margs, 0), mono_wasm_interp_method_args_get_iarg (margs, 1), mono_wasm_interp_method_args_get_iarg (margs, 2), mono_wasm_interp_method_args_get_iarg (margs, 3), mono_wasm_interp_method_args_get_iarg (margs, 4), mono_wasm_interp_method_args_get_iarg (margs, 5), mono_wasm_interp_method_args_get_iarg (margs, 6), mono_wasm_interp_method_args_get_iarg (margs, 7));
}

static void
wasm_invoke_viil (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef void (*T)(int arg_0, int arg_1, int64_t arg_2);
	T func = (T)target_func;
	func (mono_wasm_interp_method_args_get_iarg (margs, 0), mono_wasm_interp_method_args_get_iarg (margs, 1), mono_wasm_interp_method_args_get_larg (margs, 2));
}

static void
wasm_invoke_vl (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef void (*T)(int64_t arg_0);
	T func = (T)target_func;
	func (mono_wasm_interp_method_args_get_larg (margs, 0));
}

static void
wasm_invoke_v (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef void (*T)(void);
	T func = (T)target_func;
	func ();
}

static void
wasm_invoke_dd (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef double (*T)(double arg_0);
	T func = (T)target_func;
	double res = func (mono_wasm_interp_method_args_get_darg (margs, 0));
	void *retval = mono_wasm_interp_method_args_get_retval (margs);
	*(double*)retval = res;
}

static void
wasm_invoke_ddd (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef double (*T)(double arg_0, double arg_1);
	T func = (T)target_func;
	double res = func (mono_wasm_interp_method_args_get_darg (margs, 0), mono_wasm_interp_method_args_get_darg (margs, 1));
	void *retval = mono_wasm_interp_method_args_get_retval (margs);
	*(double*)retval = res;
}

static void
wasm_invoke_dddd (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef double (*T)(double arg_0, double arg_1, double arg_2);
	T func = (T)target_func;
	double res = func (mono_wasm_interp_method_args_get_darg (margs, 0), mono_wasm_interp_method_args_get_darg (margs, 1), mono_wasm_interp_method_args_get_darg (margs, 2));
	void *retval = mono_wasm_interp_method_args_get_retval (margs);
	*(double*)retval = res;
}

static void
wasm_invoke_ddi (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef double (*T)(double arg_0, int arg_1);
	T func = (T)target_func;
	double res = func (mono_wasm_interp_method_args_get_darg (margs, 0), mono_wasm_interp_method_args_get_iarg (margs, 0));
	void *retval = mono_wasm_interp_method_args_get_retval (margs);
	*(double*)retval = res;
}

static void
wasm_invoke_ff (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef float (*T)(float arg_0);
	T func = (T)target_func;
	float res = func (mono_wasm_interp_method_args_get_farg (margs, 0));
	void *retval = mono_wasm_interp_method_args_get_retval (margs);
	*(float*)retval = res;
}

static void
wasm_invoke_fff (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef float (*T)(float arg_0, float arg_1);
	T func = (T)target_func;
	float res = func (mono_wasm_interp_method_args_get_farg (margs, 0), mono_wasm_interp_method_args_get_farg (margs, 1));
	void *retval = mono_wasm_interp_method_args_get_retval (margs);
	*(float*)retval = res;
}

static void
wasm_invoke_ffff (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef float (*T)(float arg_0, float arg_1, float arg_2);
	T func = (T)target_func;
	float res = func (mono_wasm_interp_method_args_get_farg (margs, 0), mono_wasm_interp_method_args_get_farg (margs, 1), mono_wasm_interp_method_args_get_farg (margs, 2));
	void *retval = mono_wasm_interp_method_args_get_retval (margs);
	*(float*)retval = res;
}

static void
wasm_invoke_ffi (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef float (*T)(float arg_0, int arg_1);
	T func = (T)target_func;
	float res = func (mono_wasm_interp_method_args_get_farg (margs, 0), mono_wasm_interp_method_args_get_iarg (margs, 0));
	void *retval = mono_wasm_interp_method_args_get_retval (margs);
	*(float*)retval = res;
}

static void
wasm_invoke_lill (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef int64_t (*T)(int arg_0, int64_t arg_1, int64_t arg_2);
	T func = (T)target_func;
	int64_t res = func (mono_wasm_interp_method_args_get_iarg (margs, 0), mono_wasm_interp_method_args_get_larg (margs, 1), mono_wasm_interp_method_args_get_larg (margs, 3));
	void *retval = mono_wasm_interp_method_args_get_retval (margs);
	*(int64_t*)retval = res;
}

static void
wasm_invoke_lil (void *target_func, MonoInterpMethodArguments *margs)
{
	typedef int64_t (*T)(int arg_0, int64_t arg_1);
	T func = (T)target_func;
	int64_t res = func (mono_wasm_interp_method_args_get_iarg (margs, 0), mono_wasm_interp_method_args_get_larg (margs, 1));
	void *retval = mono_wasm_interp_method_args_get_retval (margs);
	*(int64_t*)retval = res;
}

static void* interp_to_native_invokes[] = {
	wasm_invoke_dd,
	wasm_invoke_ddd,
	wasm_invoke_dddd,
	wasm_invoke_ddi,
	wasm_invoke_di,
	wasm_invoke_ff,
	wasm_invoke_fff,
	wasm_invoke_ffff,
	wasm_invoke_ffi,
	wasm_invoke_i,
	wasm_invoke_ii,
	wasm_invoke_iii,
	wasm_invoke_iiii,
	wasm_invoke_iiiii,
	wasm_invoke_iiiiii,
	wasm_invoke_iiiiiii,
	wasm_invoke_iiiiiiii,
	wasm_invoke_iiiiiiiii,
	wasm_invoke_iiiiiiiiii,
	wasm_invoke_iiiil,
	wasm_invoke_iiil,
	wasm_invoke_iil,
	wasm_invoke_iili,
	wasm_invoke_iiliiil,
	wasm_invoke_iill,
	wasm_invoke_iilli,
	wasm_invoke_l,
	wasm_invoke_li,
	wasm_invoke_liiil,
	wasm_invoke_lil,
	wasm_invoke_lili,
	wasm_invoke_lill,
	wasm_invoke_v,
	wasm_invoke_vi,
	wasm_invoke_vii,
	wasm_invoke_viii,
	wasm_invoke_viiii,
	wasm_invoke_viiiii,
	wasm_invoke_viiiiii,
	wasm_invoke_viiiiiii,
	wasm_invoke_viiiiiiii,
	wasm_invoke_viil,
	wasm_invoke_vl,
};
static const char* interp_to_native_signatures[] = {
	"DD",
	"DDD",
	"DDDD",
	"DDI",
	"DI",
	"FF",
	"FFF",
	"FFFF",
	"FFI",
	"I",
	"II",
	"III",
	"IIII",
	"IIIII",
	"IIIIII",
	"IIIIIII",
	"IIIIIIII",
	"IIIIIIIII",
	"IIIIIIIIII",
	"IIIIL",
	"IIIL",
	"IIL",
	"IILI",
	"IILIIIL",
	"IILL",
	"IILLI",
	"L",
	"LI",
	"LIIIL",
	"LIL",
	"LILI",
	"LILL",
	"V",
	"VI",
	"VII",
	"VIII",
	"VIIII",
	"VIIIII",
	"VIIIIII",
	"VIIIIIII",
	"VIIIIIIII",
	"VIIL",
	"VL",
};
static unsigned int interp_to_native_signatures_count = 43;

static int
compare_icall_tramp (const void *key, const void *elem)
{
    return strcmp (key, *(void**)elem);
}

static void* 
mono_wasm_interp_to_native_callback (char* cookie)
{
    void* p = bsearch (cookie, interp_to_native_signatures, interp_to_native_signatures_count, sizeof (void*), compare_icall_tramp);
    if (!p)
        return NULL;
    int idx = (const char**)p - (const char**)interp_to_native_signatures;
    return interp_to_native_invokes [idx];
};
