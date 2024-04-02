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
	{ 0x2d3385d3, "system_wq" },
	{ 0xbb8c805, "dma_direct_unmap_sg" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xc1a89ec, "blk_cleanup_queue" },
	{ 0xbb84f7b6, "sg_alloc_table_chained" },
	{ 0x273e8436, "nvme_reset_ctrl" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xf369dcfb, "nvme_stop_ctrl" },
	{ 0xa8e2800c, "blk_mq_tagset_busy_iter" },
	{ 0xe288808d, "blk_mq_start_request" },
	{ 0x4c7dbf9c, "nvmf_register_transport" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xc5b38dbe, "nvme_set_queue_count" },
	{ 0x5e87e75, "device_destroy" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0xa11cce5e, "nvme_stop_queues" },
	{ 0x87b8798d, "sg_next" },
	{ 0xcabdc210, "nvme_complete_async_event" },
	{ 0x799510a9, "nvmf_should_reconnect" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0x5802f531, "ida_simple_get" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x8519f7c, "blk_mq_complete_request" },
	{ 0xebc1586b, "nvmf_reg_write32" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1a5a8544, "blk_mq_update_nr_hw_queues" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2ad9427a, "blk_mq_init_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xbcd8838a, "nvme_enable_ctrl" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x813cf212, "nvme_io_timeout" },
	{ 0x27e1a049, "printk" },
	{ 0x3047d077, "nvmf_connect_admin_queue" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x21f7fd27, "blk_mq_free_tag_set" },
	{ 0x8cd74356, "nvme_init_identify" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x99096e86, "ida_simple_remove" },
	{ 0xc1bd0303, "nvmf_reg_read64" },
	{ 0x9166fada, "strncpy" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x2df52479, "device_create" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xdf2dafc4, "kobject_uevent_env" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x53e19a59, "nvme_init_ctrl" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0xe6478472, "_dev_info" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x5799d532, "nvme_change_ctrl_state" },
	{ 0xa916b694, "strnlen" },
	{ 0xd0c86c05, "put_device" },
	{ 0xff9222ba, "nvmf_unregister_transport" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe3f96e3d, "nvme_cleanup_cmd" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x29a740dc, "flush_delayed_work" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfac3a5c, "nvmf_get_address" },
	{ 0xea4fcb9c, "blk_rq_map_sg" },
	{ 0xa20b232a, "blk_mq_alloc_tag_set" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x85ffabba, "get_device" },
	{ 0x92a41363, "nvme_delete_ctrl" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf1a75a3e, "nvmf_reg_read32" },
	{ 0x64b62862, "nvme_wq" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xf3a0e966, "__nvmf_check_ready" },
	{ 0x51803df3, "sg_free_table_chained" },
	{ 0x37a0cba, "kfree" },
	{ 0x250ffaa1, "dma_direct_map_sg" },
	{ 0x42d54e91, "blk_mq_quiesce_queue" },
	{ 0xfba7ddd2, "match_u64" },
	{ 0x50f72708, "nvmf_connect_io_queue" },
	{ 0x886ca932, "blk_mq_unquiesce_queue" },
	{ 0x24847958, "nvme_start_ctrl" },
	{ 0xc41c945e, "dma_direct_sync_single_for_device" },
	{ 0x65b3cec0, "nvme_setup_cmd" },
	{ 0xa047947, "class_destroy" },
	{ 0x9723604b, "nvme_stop_keep_alive" },
	{ 0xd45434ee, "admin_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x828aa1fe, "nvme_start_queues" },
	{ 0x8dc826cc, "nvmf_free_options" },
	{ 0x121da905, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x28318305, "snprintf" },
	{ 0x65e62e05, "nvmf_fail_nonready_command" },
	{ 0x72ce5d32, "nvme_complete_rq" },
	{ 0xce2ba1bd, "__class_create" },
	{ 0x32178f3f, "ida_destroy" },
	{ 0x2ebe1831, "nvme_uninit_ctrl" },
	{ 0x36b3d463, "dma_ops" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nvme-core,nvme-fabrics";


MODULE_INFO(srcversion, "325E17E0D1203D205C5300B");
MODULE_INFO(rhelversion, "8.0");
