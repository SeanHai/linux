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
	{ 0x8175c58a, "sbc_get_device_type" },
	{ 0x1bc703ac, "target_backend_unregister" },
	{ 0xb9338741, "kmem_cache_destroy" },
	{ 0x1e9673b2, "root_device_unregister" },
	{ 0xaaa60325, "genl_unregister_family" },
	{ 0xec3f74be, "transport_backend_register" },
	{ 0xdffc50d0, "passthrough_attrib_attrs" },
	{ 0x604651e7, "genl_register_family" },
	{ 0x22d1eb5, "__root_device_register" },
	{ 0x8678453c, "kmem_cache_create" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x2b63e7fc, "kmem_cache_alloc" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xdf40da5f, "nla_put_64bit" },
	{ 0x5792f848, "strlcpy" },
	{ 0xc4d1388a, "uio_unregister_device" },
	{ 0x66dea867, "__uio_register_device" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x454a35d3, "genlmsg_multicast_allns" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x29361773, "complete" },
	{ 0xeb1033d2, "target_undepend_item" },
	{ 0x6c4e0ecd, "target_find_device" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2dc7de88, "__radix_tree_insert" },
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0x7e3c4df3, "uio_event_notify" },
	{ 0xfb578fc5, "memset" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x701843ca, "idr_destroy" },
	{ 0x999e8297, "vfree" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xd11a8c36, "idr_get_next" },
	{ 0xf9019aa0, "kstrtou8" },
	{ 0xf82e0bdc, "unmap_mapping_range" },
	{ 0xb6a68816, "find_last_bit" },
	{ 0x101557d8, "idr_for_each" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xfa5223cc, "del_timer" },
	{ 0xcfe0b518, "target_complete_cmd_with_length" },
	{ 0x6156f8ac, "transport_copy_sense_to_cmd" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0x754d539c, "strlen" },
	{ 0x2809a43b, "genlmsg_put" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0xf7a3bb12, "target_complete_cmd" },
	{ 0x8a7de935, "kmem_cache_free" },
	{ 0x69ac23c0, "idr_remove" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0xd9c3f128, "kstrtos8" },
	{ 0x3de37959, "vmalloc_to_page" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0xa79f6dfa, "radix_tree_delete" },
	{ 0x3539f11b, "match_strlcpy" },
	{ 0x44e9a829, "match_token" },
	{ 0x85df9b6c, "strsep" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0xacf4d843, "match_strdup" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xa5d06444, "passthrough_parse_cdb" },
	{ 0x28318305, "snprintf" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x787b953, "idr_alloc" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x50fad434, "round_jiffies_up" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x880d0e9d, "radix_tree_lookup" },
	{ 0x87b8798d, "sg_next" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf7d6636f, "current_task" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x373db350, "kstrtoint" },
	{ 0x27e1a049, "printk" },
	{ 0x91715312, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod,uio";


MODULE_INFO(srcversion, "996481CA75F4D79276A4DAA");
MODULE_INFO(rhelversion, "8.0");
