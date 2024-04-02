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
	{ 0xf9a482f9, "msleep" },
	{ 0x6b185c62, "usb_stor_bulk_transfer_buf" },
	{ 0xc0b935d8, "usb_stor_post_reset" },
	{ 0xc56f864d, "usb_stor_Bulk_transport" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x25fa992a, "usb_stor_disconnect" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0xb65c0ff, "usb_stor_probe2" },
	{ 0xd3b306fb, "usb_stor_host_template_init" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x54f9e0, "usb_stor_pre_reset" },
	{ 0x314f783a, "usb_stor_reset_resume" },
	{ 0xc53bb871, "usb_stor_suspend" },
	{ 0xe2d43bc0, "usb_stor_probe1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x1046ae65, "usb_stor_resume" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x797e4814, "usb_stor_Bulk_reset" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usb-storage";

MODULE_ALIAS("usb:v045Ap5210d0101dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "772FF150B1724B8A2A89B29");
MODULE_INFO(rhelversion, "8.0");
