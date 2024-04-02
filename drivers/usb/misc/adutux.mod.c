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
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x69acdf38, "memcpy" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xe6478472, "_dev_info" },
	{ 0x79f91166, "usb_register_dev" },
	{ 0x3604b5df, "usb_string" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x75aea49c, "usb_find_common_endpoints_reverse" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0xd64657ae, "usb_deregister_dev" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xf7d6636f, "current_task" },
	{ 0x27e1a049, "printk" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x4ddaa140, "usb_find_interface" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0A07p0064d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A07p0078d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A07p0082d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A07p00C8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A07p00D0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A07p00DAd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "76E3D41913B3ABF477395A5");
MODULE_INFO(rhelversion, "8.0");
