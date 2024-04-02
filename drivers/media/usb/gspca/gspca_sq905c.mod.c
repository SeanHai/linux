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
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xe211ead1, "gspca_dev_probe" },
	{ 0xa14f9828, "gspca_resume" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x5aa7360c, "gspca_disconnect" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x27e1a049, "printk" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4fea5b3b, "usb_bulk_msg" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x37a0cba, "kfree" },
	{ 0x319ba45f, "gspca_frame_add" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x121da905, "queue_work_on" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gspca_main";

MODULE_ALIAS("usb:v2770p905Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2770p9050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2770p9051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2770p9052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2770p913Dd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7B61332B9F5EB84263E475E");
MODULE_INFO(rhelversion, "8.0");
