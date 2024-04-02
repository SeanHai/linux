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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x4a27d4e6, "gspca_suspend" },
	{ 0xe211ead1, "gspca_dev_probe" },
	{ 0xa14f9828, "gspca_resume" },
	{ 0xe042a9a1, "v4l2_ctrl_g_ctrl" },
	{ 0x6b25ae0e, "v4l2_ctrl_new_std" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x5aa7360c, "gspca_disconnect" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x27e1a049, "printk" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4fea5b3b, "usb_bulk_msg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x319ba45f, "gspca_frame_add" },
	{ 0xadc17cd5, "v4l2_ctrl_handler_init_class" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x121da905, "queue_work_on" },
	{ 0x84277b2a, "release_firmware" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gspca_main,videodev";

MODULE_ALIAS("usb:v04C1p009Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0602p1001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BCA9D40FB0FC686E9EF785E");
MODULE_INFO(rhelversion, "8.0");
