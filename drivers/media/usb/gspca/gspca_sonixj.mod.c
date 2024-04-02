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
	{ 0x1c2b1d95, "gspca_expo_autogain" },
	{ 0xa14f9828, "gspca_resume" },
	{ 0x6b25ae0e, "v4l2_ctrl_new_std" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x5aa7360c, "gspca_disconnect" },
	{ 0xfe7843b, "input_event" },
	{ 0x456e53b3, "v4l2_ctrl_new_std_menu" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x27e1a049, "printk" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x37b90fbc, "v4l2_ctrl_auto_cluster" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x319ba45f, "gspca_frame_add" },
	{ 0xadc17cd5, "v4l2_ctrl_handler_init_class" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x121da905, "queue_work_on" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,gspca_main";

MODULE_ALIAS("usb:v0458p7025d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p702Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep00F5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep00F7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0327d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0330d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8p3004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8p3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p607Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p60C0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p60CEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p60ECd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p60FBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p60FCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p60FEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p610Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p610Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p610Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p610Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6128d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p612Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p612Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p612Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p612Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6130d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6138d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p613Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p613Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p613Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p613Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6142d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6143d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6148d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p614Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "3733EDC47D8FBF4B831E16A");
MODULE_INFO(rhelversion, "8.0");
