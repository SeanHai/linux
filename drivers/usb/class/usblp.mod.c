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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x1000e51, "schedule" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xe6478472, "_dev_info" },
	{ 0x79f91166, "usb_register_dev" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0xedc5eced, "usb_find_common_endpoints" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0xcf01d9aa, "usb_autopm_put_interface" },
	{ 0xf8a5b44d, "usb_autopm_get_interface" },
	{ 0x4ddaa140, "usb_find_interface" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xf7d6636f, "current_task" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x6b8d353d, "device_remove_file" },
	{ 0xd64657ae, "usb_deregister_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x91715312, "sprintf" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x27e1a049, "printk" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0xdc2ac18b, "usb_unanchor_urb" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x482f8924, "usb_anchor_urb" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v*p*d*dc07dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc07dsc01dp02ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc07dsc01dp03ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip02in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip03in*");
MODULE_ALIAS("usb:v04B8p0202d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "2CEA51520442AFC40524C8E");
MODULE_INFO(rhelversion, "8.0");
