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
	{ 0x2105444b, "default_llseek" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x79f91166, "usb_register_dev" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0xedc5eced, "usb_find_common_endpoints" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xe6478472, "_dev_info" },
	{ 0x37a0cba, "kfree" },
	{ 0xd64657ae, "usb_deregister_dev" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xcf01d9aa, "usb_autopm_put_interface" },
	{ 0x4fea5b3b, "usb_bulk_msg" },
	{ 0xf7d6636f, "current_task" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0xf8a5b44d, "usb_autopm_get_interface" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x4ddaa140, "usb_find_interface" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0681p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p0010d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "84D673FB0E4A05646893DCB");
MODULE_INFO(rhelversion, "8.0");
