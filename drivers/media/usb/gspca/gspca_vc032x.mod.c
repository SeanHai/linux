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
	{ 0xf9a482f9, "msleep" },
	{ 0x565d0104, "v4l2_ctrl_cluster" },
	{ 0x4a27d4e6, "gspca_suspend" },
	{ 0xe211ead1, "gspca_dev_probe" },
	{ 0xa14f9828, "gspca_resume" },
	{ 0x6b25ae0e, "v4l2_ctrl_new_std" },
	{ 0x5aa7360c, "gspca_disconnect" },
	{ 0x456e53b3, "v4l2_ctrl_new_std_menu" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x27e1a049, "printk" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x319ba45f, "gspca_frame_add" },
	{ 0xadc17cd5, "v4l2_ctrl_handler_init_class" },
	{ 0x89d49eda, "usb_register_driver" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,gspca_main";

MODULE_ALIAS("usb:v041Ep405Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0892d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0896d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0897d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8p0321d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8p0323d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8p0328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8pC001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8pC002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8pC301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15B8p6001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15B8p6002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp4802d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5532F24AD43E6514854F14A");
MODULE_INFO(rhelversion, "8.0");
