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
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x822030b4, "input_set_abs_params" },
	{ 0x79f91166, "usb_register_dev" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x6dd5f441, "usb_ifnum_to_if" },
	{ 0x7a30f3c2, "rc_free_device" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xbebb99e4, "rc_register_device" },
	{ 0x963204a3, "rc_allocate_device" },
	{ 0xf789deff, "input_register_device" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xd55379f7, "input_allocate_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2fc8b141, "usb_get_dev" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd491a78a, "rc_keydown" },
	{ 0xfe7843b, "input_event" },
	{ 0x6c7f12ee, "rc_keyup" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xd64657ae, "usb_deregister_dev" },
	{ 0x10bce2f5, "rc_unregister_device" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0x871863c9, "usb_put_dev" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0x28318305, "snprintf" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x754d539c, "strlen" },
	{ 0xe6478472, "_dev_info" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf7d6636f, "current_task" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x4ddaa140, "usb_find_interface" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x29361773, "complete" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x6874d351, "rc_g_keycode_from_table" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x27e1a049, "printk" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rc-core";

MODULE_ALIAS("usb:v15C2pFFDCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0034d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0035d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0036d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0038d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0045d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0046d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A4FEEDFD615717C65EE43A9");
MODULE_INFO(rhelversion, "8.0");
