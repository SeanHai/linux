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
	{ 0x317a8ad6, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x565d0104, "v4l2_ctrl_cluster" },
	{ 0x4a27d4e6, "gspca_suspend" },
	{ 0xe211ead1, "gspca_dev_probe" },
	{ 0xa14f9828, "gspca_resume" },
	{ 0xe042a9a1, "v4l2_ctrl_g_ctrl" },
	{ 0x6b25ae0e, "v4l2_ctrl_new_std" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x5aa7360c, "gspca_disconnect" },
	{ 0xfe7843b, "input_event" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x27e1a049, "printk" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x40571b16, "__v4l2_ctrl_s_ctrl" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x37b90fbc, "v4l2_ctrl_auto_cluster" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x319ba45f, "gspca_frame_add" },
	{ 0xadc17cd5, "v4l2_ctrl_handler_init_class" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x6dd5f441, "usb_ifnum_to_if" },
	{ 0x121da905, "queue_work_on" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,gspca_main";

MODULE_ALIAS("usb:v0C45p6240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6242d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6248d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p624Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p624Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p624Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6251d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6253d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6260d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6270d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p627Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p627Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p627Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6280d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6282d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6288d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p628Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p628Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p628Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p62A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p62B0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p62B3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p62BBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p62BCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep00F4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v145Fp013Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p7029d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p7045d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p704Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p704Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA168p0610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA168p0611d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA168p0613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA168p0618d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA168p0614d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA168p0615d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA168p0617d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "301554488C583D4B43CF0D2");
MODULE_INFO(rhelversion, "8.0");
