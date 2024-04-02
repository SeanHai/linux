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
	{ 0x88db9f48, "__check_object_size" },
	{ 0x79f91166, "usb_register_dev" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0xedc5eced, "usb_find_common_endpoints" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x2fc8b141, "usb_get_dev" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0xd64657ae, "usb_deregister_dev" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x27e1a049, "printk" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x4ddaa140, "usb_find_interface" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xf2536a31, "kill_fasync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x4fea5b3b, "usb_bulk_msg" },
	{ 0x1681100a, "usb_clear_halt" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xeb6b6275, "fasync_helper" },
	{ 0x91715312, "sprintf" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x37a0cba, "kfree" },
	{ 0x871863c9, "usb_put_dev" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icFEisc03ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icFEisc03ip01in*");

MODULE_INFO(srcversion, "2B63B2763B96C7888F9AD47");
MODULE_INFO(rhelversion, "8.0");
