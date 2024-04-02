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
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x6cbd6258, "xenbus_unregister_driver" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x77a37c5a, "__xenbus_register_frontend" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xeb833c22, "xen_has_pv_disk_devices" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xdf2dafc4, "kobject_uevent_env" },
	{ 0x898ec6cf, "revalidate_disk" },
	{ 0xd943f820, "submit_bio" },
	{ 0xd2d5a94, "blk_mq_kick_requeue_list" },
	{ 0xf54f23b, "blk_mq_requeue_request" },
	{ 0x36fcc755, "device_add_disk" },
	{ 0x6c2ae746, "xenbus_dev_error" },
	{ 0x1a5a8544, "blk_mq_update_nr_hw_queues" },
	{ 0x2af30a80, "xenbus_switch_state" },
	{ 0xfb578fc5, "memset" },
	{ 0x754d539c, "strlen" },
	{ 0x52431348, "xenbus_transaction_start" },
	{ 0xe41534ce, "bind_evtchn_to_irqhandler" },
	{ 0x1dfddc0c, "xenbus_alloc_evtchn" },
	{ 0x4734b6ab, "xenbus_grant_ring" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0x2c2cd7f7, "set_disk_ro" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x2ad9427a, "blk_mq_init_queue" },
	{ 0xa20b232a, "blk_mq_alloc_tag_set" },
	{ 0x342ce1f6, "__alloc_disk_node" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x648b0c35, "xenbus_frontend_closed" },
	{ 0xe6478472, "_dev_info" },
	{ 0xd63aa88f, "bdput" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xc273714d, "bdget_disk" },
	{ 0x2612ff0c, "put_disk" },
	{ 0x21f7fd27, "blk_mq_free_tag_set" },
	{ 0xc1a89ec, "blk_cleanup_queue" },
	{ 0xdd2723df, "del_gendisk" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfe727411, "get_phys_to_machine" },
	{ 0x25f02c87, "xen_p2m_addr" },
	{ 0x3a7d80f9, "xen_max_p2m_pfn" },
	{ 0x3362b03c, "xen_p2m_size" },
	{ 0xf27d0a7b, "gnttab_grant_foreign_access_ref" },
	{ 0x4b931968, "xen_features" },
	{ 0x31dca4d8, "gnttab_claim_grant_reference" },
	{ 0x7712771a, "unbind_from_irqhandler" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x317a8ad6, "flush_work" },
	{ 0x2b0fe000, "gnttab_cancel_free_callback" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xb43d43fd, "blk_mq_stop_hw_queues" },
	{ 0x4b3cdcb2, "blk_queue_flag_clear" },
	{ 0x171ae6a0, "blk_mq_start_stopped_hw_queues" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x372cfd6e, "gnttab_end_foreign_access" },
	{ 0x80c11314, "gnttab_query_foreign_access" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x8519f7c, "blk_mq_complete_request" },
	{ 0x37a0cba, "kfree" },
	{ 0xecd8f23d, "xenbus_read" },
	{ 0x28e64c64, "xen_has_pv_and_legacy_disk_devices" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x9f984513, "strrchr" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0x5c8755f4, "xenbus_scanf" },
	{ 0x93d1d424, "gnttab_free_grant_references" },
	{ 0x86623fd7, "notify_remote_via_irq" },
	{ 0x1b5bc7d5, "blk_mq_stop_hw_queue" },
	{ 0x76e85b92, "gnttab_request_free_callback" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x97d20533, "gnttab_foreach_grant_in_range" },
	{ 0x87b8798d, "sg_next" },
	{ 0xea4fcb9c, "blk_rq_map_sg" },
	{ 0xd27f215d, "gnttab_alloc_grant_references" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe288808d, "blk_mq_start_request" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3c87b9a5, "blk_queue_max_discard_sectors" },
	{ 0x9881549, "blk_queue_dma_alignment" },
	{ 0x17c430a5, "blk_queue_max_segments" },
	{ 0x1ad357ca, "blk_queue_max_segment_size" },
	{ 0x9ad8cf3d, "blk_queue_segment_boundary" },
	{ 0x51722f38, "blk_queue_max_hw_sectors" },
	{ 0x1eb86738, "blk_queue_physical_block_size" },
	{ 0x3346094c, "blk_queue_logical_block_size" },
	{ 0xb549bffc, "blk_queue_flag_set" },
	{ 0x1cb9a1c8, "xenbus_gather" },
	{ 0xc6572a90, "xenbus_read_unsigned" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x27e1a049, "printk" },
	{ 0x8edb4c42, "blk_queue_write_cache" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf7d6636f, "current_task" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x89d5475b, "xenbus_dev_fatal" },
	{ 0x732852fe, "xenbus_transaction_end" },
	{ 0x7b0cf8c, "xenbus_printf" },
	{ 0x28318305, "snprintf" },
	{ 0x44d14e59, "blk_mq_end_request" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1076A71D5337729C4AE3FF5");
MODULE_INFO(rhelversion, "8.0");
