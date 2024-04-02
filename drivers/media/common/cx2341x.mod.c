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
	{ 0x565d0104, "v4l2_ctrl_cluster" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xc40c9cea, "v4l2_ctrl_handler_free" },
	{ 0xe042a9a1, "v4l2_ctrl_g_ctrl" },
	{ 0x6b25ae0e, "v4l2_ctrl_new_std" },
	{ 0x6f96eb55, "v4l2_ctrl_activate" },
	{ 0x315de2cf, "v4l2_ctrl_get_menu" },
	{ 0x456e53b3, "v4l2_ctrl_new_std_menu" },
	{ 0x27e1a049, "printk" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdf71f10b, "v4l2_ctrl_new_custom" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xdca4e2a, "v4l2_ctrl_handler_setup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x89e3897d, "v4l2_ctrl_query_fill" },
	{ 0x43ee9182, "v4l2_ctrl_grab" },
	{ 0xadc17cd5, "v4l2_ctrl_handler_init_class" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,v4l2-common";


MODULE_INFO(srcversion, "EF316D19C0846FA5F7298CC");
MODULE_INFO(rhelversion, "8.0");
