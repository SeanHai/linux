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
	{ 0xc62a69e, "usbnet_resume" },
	{ 0xa8676eaa, "usbnet_suspend" },
	{ 0x329503a9, "usbnet_disconnect" },
	{ 0x7bda1555, "usbnet_probe" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xe6478472, "_dev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0x145fd4a, "usbnet_get_endpoints" },
	{ 0x3604b5df, "usb_string" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4fea5b3b, "usb_bulk_msg" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xd3ad0c22, "pskb_expand_head" },
	{ 0x5def83f9, "skb_push" },
	{ 0x37a0cba, "kfree" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0xdad2fe11, "usbnet_skb_return" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v0572pCB01d*dcFFdsc00dp00ic*isc*ip*in*");

MODULE_INFO(srcversion, "66E13BF4220DB721A64FDD9");
MODULE_INFO(rhelversion, "8.0");
