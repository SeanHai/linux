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
	{ 0x4a27d4e6, "gspca_suspend" },
	{ 0x7018acf, "usb_altnum_to_altsetting" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xa14f9828, "gspca_resume" },
	{ 0xe042a9a1, "v4l2_ctrl_g_ctrl" },
	{ 0x6b25ae0e, "v4l2_ctrl_new_std" },
	{ 0x5aa7360c, "gspca_disconnect" },
	{ 0x9110f025, "gspca_dev_probe2" },
	{ 0xfe7843b, "input_event" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x27e1a049, "printk" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1681100a, "usb_clear_halt" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x43ee9182, "v4l2_ctrl_grab" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x319ba45f, "gspca_frame_add" },
	{ 0xadc17cd5, "v4l2_ctrl_handler_init_class" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x6dd5f441, "usb_ifnum_to_if" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gspca_main,videodev";

MODULE_ALIAS("usb:v0545p8080d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0545p8080d0002dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0545p8080d030Adc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0545p8080d0301dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0545p8002d030Adc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0545p800Cd030Adc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0545p800Dd030Adc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "02712566E91ED5871F937DF");
MODULE_INFO(rhelversion, "8.0");
