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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xc1a89ec, "blk_cleanup_queue" },
	{ 0xbb84f7b6, "sg_alloc_table_chained" },
	{ 0x273e8436, "nvme_reset_ctrl" },
	{ 0xf369dcfb, "nvme_stop_ctrl" },
	{ 0xa8e2800c, "blk_mq_tagset_busy_iter" },
	{ 0xe288808d, "blk_mq_start_request" },
	{ 0x4c7dbf9c, "nvmf_register_transport" },
	{ 0xb6149067, "nvme_shutdown_ctrl" },
	{ 0xc5b38dbe, "nvme_set_queue_count" },
	{ 0xa11cce5e, "nvme_stop_queues" },
	{ 0xa1ffbb27, "blk_mq_tag_to_rq" },
	{ 0xcabdc210, "nvme_complete_async_event" },
	{ 0x98ee3860, "nvmet_sq_init" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x8519f7c, "blk_mq_complete_request" },
	{ 0xebc1586b, "nvmf_reg_write32" },
	{ 0x1a5a8544, "blk_mq_update_nr_hw_queues" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xaf9ba720, "nvmet_req_execute" },
	{ 0x2ad9427a, "blk_mq_init_queue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xbcd8838a, "nvme_enable_ctrl" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x813cf212, "nvme_io_timeout" },
	{ 0x3047d077, "nvmf_connect_admin_queue" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x21f7fd27, "blk_mq_free_tag_set" },
	{ 0x8cd74356, "nvme_init_identify" },
	{ 0xc1bd0303, "nvmf_reg_read64" },
	{ 0x318aae03, "nvmet_register_transport" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xc1dc7ee, "nvmet_req_init" },
	{ 0xd58bbbcb, "nvme_delete_wq" },
	{ 0x53e19a59, "nvme_init_ctrl" },
	{ 0xe6478472, "_dev_info" },
	{ 0x5799d532, "nvme_change_ctrl_state" },
	{ 0x7ea95c9d, "nvmet_unregister_transport" },
	{ 0xd0c86c05, "put_device" },
	{ 0xff9222ba, "nvmf_unregister_transport" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe3f96e3d, "nvme_cleanup_cmd" },
	{ 0x5424d16, "nvme_cancel_request" },
	{ 0xd02f829d, "nvmet_sq_destroy" },
	{ 0xfac3a5c, "nvmf_get_address" },
	{ 0xea4fcb9c, "blk_rq_map_sg" },
	{ 0xa20b232a, "blk_mq_alloc_tag_set" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x85ffabba, "get_device" },
	{ 0x92a41363, "nvme_delete_ctrl" },
	{ 0xf1a75a3e, "nvmf_reg_read32" },
	{ 0xf3a0e966, "__nvmf_check_ready" },
	{ 0x51803df3, "sg_free_table_chained" },
	{ 0x37a0cba, "kfree" },
	{ 0x42d54e91, "blk_mq_quiesce_queue" },
	{ 0x50f72708, "nvmf_connect_io_queue" },
	{ 0x886ca932, "blk_mq_unquiesce_queue" },
	{ 0x24847958, "nvme_start_ctrl" },
	{ 0x65b3cec0, "nvme_setup_cmd" },
	{ 0xd45434ee, "admin_timeout" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x8dc826cc, "nvmf_free_options" },
	{ 0x121da905, "queue_work_on" },
	{ 0x65e62e05, "nvmf_fail_nonready_command" },
	{ 0x72ce5d32, "nvme_complete_rq" },
	{ 0x2ebe1831, "nvme_uninit_ctrl" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nvme-core,nvme-fabrics,nvmet";


MODULE_INFO(srcversion, "2D76ADAE7DCEB4991F0D0A6");
MODULE_INFO(rhelversion, "8.0");
