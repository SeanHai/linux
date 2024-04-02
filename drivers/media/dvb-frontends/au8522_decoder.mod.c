#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x61029c2d, "v4l2_ctrl_subdev_log_status" },
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe2828860, "au8522_readreg" },
	{ 0x1d3830e4, "au8522_writereg" },
	{ 0x6b25ae0e, "v4l2_ctrl_new_std" },
	{ 0xadc17cd5, "v4l2_ctrl_handler_init_class" },
	{ 0xf65fde3e, "v4l2_i2c_subdev_init" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x27e1a049, "printk" },
	{ 0xcc35ae53, "au8522_get_state" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbc99a4d2, "au8522_release_state" },
	{ 0xc40c9cea, "v4l2_ctrl_handler_free" },
	{ 0x1b7ade5b, "v4l2_device_unregister_subdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,au8522_common,v4l2-common";

MODULE_ALIAS("i2c:au8522");

MODULE_INFO(srcversion, "2366163E1D99035949AFCB3");
MODULE_INFO(rhelversion, "8.0");
