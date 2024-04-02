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
	{ 0x4a27d4e6, "gspca_suspend" },
	{ 0x7018acf, "usb_altnum_to_altsetting" },
	{ 0xe211ead1, "gspca_dev_probe" },
	{ 0xa14f9828, "gspca_resume" },
	{ 0x6b25ae0e, "v4l2_ctrl_new_std" },
	{ 0x5aa7360c, "gspca_disconnect" },
	{ 0xfe7843b, "input_event" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x27e1a049, "printk" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x319ba45f, "gspca_frame_add" },
	{ 0xadc17cd5, "v4l2_ctrl_handler_init_class" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x6dd5f441, "usb_ifnum_to_if" },
	{ 0x77e92c90, "usb_alloc_coherent" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gspca_main,videodev";

MODULE_ALIAS("usb:v04C8p0720d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BB96E74AEDFF93E03DF0BAF");
MODULE_INFO(rhelversion, "8.0");
