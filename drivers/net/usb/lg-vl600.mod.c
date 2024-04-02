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
	{ 0x7b29caae, "usbnet_cdc_status" },
	{ 0xc62a69e, "usbnet_resume" },
	{ 0xa8676eaa, "usbnet_suspend" },
	{ 0x329503a9, "usbnet_disconnect" },
	{ 0x7bda1555, "usbnet_probe" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xd840cf53, "usbnet_cdc_bind" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xbb325202, "usbnet_cdc_unbind" },
	{ 0x37a0cba, "kfree" },
	{ 0x509f625d, "consume_skb" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0xdad2fe11, "usbnet_skb_return" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0x8c24bd72, "skb_clone" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb0e602eb, "memmove" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x5def83f9, "skb_push" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xfad0a7f6, "skb_copy_expand" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cdc_ether,usbnet";

MODULE_ALIAS("usb:v1004p61AAd*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "6D2157630CEC598BDB23EEC");
MODULE_INFO(rhelversion, "8.0");
