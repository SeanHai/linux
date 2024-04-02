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
	{ 0xbc99a4d2, "au8522_release_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x17cb8fc9, "au8522_led_ctrl" },
	{ 0x1d3830e4, "au8522_writereg" },
	{ 0xe2828860, "au8522_readreg" },
	{ 0x27e1a049, "printk" },
	{ 0xb34f6e76, "au8522_i2c_gate_ctrl" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x178675ad, "au8522_sleep" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3fd53ef6, "au8522_analog_i2c_gate_ctrl" },
	{ 0xcc35ae53, "au8522_get_state" },
	{ 0x6193af4f, "au8522_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=au8522_common";


MODULE_INFO(srcversion, "B5976AB3619DE823209658B");
MODULE_INFO(rhelversion, "8.0");
