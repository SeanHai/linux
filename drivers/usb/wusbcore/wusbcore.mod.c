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
	{ 0xb7e2662, "crypto_alloc_skcipher" },
	{ 0xb43a245f, "uwb_rc_put" },
	{ 0x910aa949, "uwb_rc_get_by_grandpa" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x68d310dd, "uwb_rsv_establish" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x89bbafc6, "usb_register_notify" },
	{ 0xa2113242, "usb_ep0_reinit" },
	{ 0xe6e6f9e9, "uwb_pal_register" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xd6f91571, "usb_set_device_state" },
	{ 0x9ca2f1ef, "uwb_rsv_get_usable_mas" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x8d6901af, "usb_hcd_giveback_urb" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x91715312, "sprintf" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0x689ddee0, "uwb_rsv_destroy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x210012b5, "usb_get_hcd" },
	{ 0xc07d15c, "usb_put_hcd" },
	{ 0x89d41d63, "usb_get_descriptor" },
	{ 0xb5a8d234, "cancel_delayed_work" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x3b0d94da, "uwb_radio_stop" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x2c5a3f4b, "uwb_rsv_terminate" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb083f42d, "uwb_pal_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x811dc334, "usb_unregister_notify" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xe6478472, "_dev_info" },
	{ 0x2fc8b141, "usb_get_dev" },
	{ 0xf16724bb, "uwb_pal_init" },
	{ 0x841b74b, "uwb_rc_reset_all" },
	{ 0x1ea3c9f5, "uwb_radio_start" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x871863c9, "usb_put_dev" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdf6e33f3, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc15a44c6, "memzero_explicit" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x3d495048, "uwb_rsv_create" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xba8ea898, "crypto_alloc_base" },
	{ 0x85f5e2aa, "krealloc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=uwb";


MODULE_INFO(srcversion, "020C3733B72309F58A7E277");
MODULE_INFO(rhelversion, "8.0");
