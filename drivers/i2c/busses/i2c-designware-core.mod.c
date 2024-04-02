#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe6af07fa, "module_layout" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xf946d9ad, "__pm_runtime_suspend" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xcb44743c, "devm_gpiod_get" },
	{ 0x8a77fa8c, "__pm_runtime_resume" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xe6478472, "_dev_info" },
	{ 0xf7da314, "i2c_add_numbered_adapter" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x62e2909, "devm_gpiod_get_optional" },
	{ 0xf34c0812, "i2c_generic_scl_recovery" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x29361773, "complete" },
	{ 0xbcf56a35, "i2c_recover_bus" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x25d35c2d, "devm_request_threaded_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F1AE608BD11D0DFEDA70ED0");
MODULE_INFO(rhelversion, "8.0");
