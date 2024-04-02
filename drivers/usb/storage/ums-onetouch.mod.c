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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xc0b935d8, "usb_stor_post_reset" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x25fa992a, "usb_stor_disconnect" },
	{ 0xfe7843b, "input_event" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x5792f848, "strlcpy" },
	{ 0xb65c0ff, "usb_stor_probe2" },
	{ 0x69238564, "usb_free_coherent" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0xd3b306fb, "usb_stor_host_template_init" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf789deff, "input_register_device" },
	{ 0x54f9e0, "usb_stor_pre_reset" },
	{ 0x314f783a, "usb_stor_reset_resume" },
	{ 0xc53bb871, "usb_stor_suspend" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0xe2d43bc0, "usb_stor_probe1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x1046ae65, "usb_stor_resume" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x28318305, "snprintf" },
	{ 0x77e92c90, "usb_alloc_coherent" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0xd55379f7, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usb-storage";

MODULE_ALIAS("usb:v0D49p7000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D49p7010d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0582A419EF6910DAEFCE1D1");
MODULE_INFO(rhelversion, "8.0");
