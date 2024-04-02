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
	{ 0x85d45f4d, "noop_llseek" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x4fea5b3b, "usb_bulk_msg" },
	{ 0x79f91166, "usb_register_dev" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xedc5eced, "usb_find_common_endpoints" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x2fc8b141, "usb_get_dev" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xe6478472, "_dev_info" },
	{ 0xd64657ae, "usb_deregister_dev" },
	{ 0xcf01d9aa, "usb_autopm_put_interface" },
	{ 0x27e1a049, "printk" },
	{ 0xf8a5b44d, "usb_autopm_get_interface" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x4ddaa140, "usb_find_interface" },
	{ 0xdc2ac18b, "usb_unanchor_urb" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x482f8924, "usb_anchor_urb" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x77e92c90, "usb_alloc_coherent" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0x25170ad2, "down_interruptible" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xcf2a6966, "up" },
	{ 0x69238564, "usb_free_coherent" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x754d539c, "strlen" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x871863c9, "usb_put_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v10D2p*d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BF1B31E0D291A9F376B4DB7");
MODULE_INFO(rhelversion, "8.0");
