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
	{ 0x317a8ad6, "flush_work" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x139cee21, "wait_for_completion_io_timeout" },
	{ 0xbb8c805, "dma_direct_unmap_sg" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xc1a89ec, "blk_cleanup_queue" },
	{ 0xde455655, "pci_free_irq_vectors" },
	{ 0x273e8436, "nvme_reset_ctrl" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x58a1b98b, "param_get_int" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xd0632c58, "pci_sriov_configure_simple" },
	{ 0x89e66458, "device_release_driver" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xf369dcfb, "nvme_stop_ctrl" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x3cb8c6d1, "nvme_unfreeze" },
	{ 0xa8e2800c, "blk_mq_tagset_busy_iter" },
	{ 0xe288808d, "blk_mq_start_request" },
	{ 0x4d4d7b79, "blk_mq_map_queues" },
	{ 0xb6149067, "nvme_shutdown_ctrl" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xc5b38dbe, "nvme_set_queue_count" },
	{ 0xce41c56, "blk_rq_map_integrity_sg" },
	{ 0x9300507b, "mempool_destroy" },
	{ 0xa11cce5e, "nvme_stop_queues" },
	{ 0x87b8798d, "sg_next" },
	{ 0xa1ffbb27, "blk_mq_tag_to_rq" },
	{ 0xcabdc210, "nvme_complete_async_event" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xa50665a7, "nvme_kill_queues" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xb9ff77a, "param_set_int" },
	{ 0x6d253dca, "dmi_match" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x8519f7c, "blk_mq_complete_request" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1a5a8544, "blk_mq_update_nr_hw_queues" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x2ad9427a, "blk_mq_init_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x898c27fe, "pci_alloc_irq_vectors_affinity" },
	{ 0xfb578fc5, "memset" },
	{ 0xdba47dbc, "pci_enable_pcie_error_reporting" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0xbcd8838a, "nvme_enable_ctrl" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0xef7618b6, "blk_put_queue" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x813cf212, "nvme_io_timeout" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x2342a797, "sysfs_remove_file_from_group" },
	{ 0x21f7fd27, "blk_mq_free_tag_set" },
	{ 0x8cd74356, "nvme_init_identify" },
	{ 0x5399a5e3, "nvme_remove_namespaces" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x29928ef8, "pci_device_is_present" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x373db350, "kstrtoint" },
	{ 0x13c0d491, "blk_execute_rq_nowait" },
	{ 0x8a08e0dc, "pci_request_irq" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xbceb1e58, "async_schedule" },
	{ 0x36ab07b9, "blk_get_queue" },
	{ 0x53e19a59, "nvme_init_ctrl" },
	{ 0xe68fed60, "pci_select_bars" },
	{ 0xe6478472, "_dev_info" },
	{ 0xdcd000b8, "kmem_cache_alloc_node_trace" },
	{ 0x5799d532, "nvme_change_ctrl_state" },
	{ 0x6fa4c42d, "blk_mq_free_request" },
	{ 0x86c45796, "mempool_alloc" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x68b54d99, "mempool_create_node" },
	{ 0xc92c8805, "pci_free_irq" },
	{ 0xd0c86c05, "put_device" },
	{ 0x709bd92f, "pci_cleanup_aer_uncorrect_error_status" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe3f96e3d, "nvme_cleanup_cmd" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x5424d16, "nvme_cancel_request" },
	{ 0x4548f5ef, "nvme_wait_freeze" },
	{ 0x68fbb187, "blk_mq_pci_map_queues" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x5f86f471, "blk_rq_count_integrity_sg" },
	{ 0xea4fcb9c, "blk_rq_map_sg" },
	{ 0xcd8dd495, "dma_pool_alloc" },
	{ 0xa20b232a, "blk_mq_alloc_tag_set" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x74b55fe, "mempool_free" },
	{ 0xf99d347e, "node_states" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xcce9155, "nvme_disable_ctrl" },
	{ 0x85ffabba, "get_device" },
	{ 0xa44d2dc1, "pci_irq_vector" },
	{ 0x64b62862, "nvme_wq" },
	{ 0xa05c03df, "mempool_kmalloc" },
	{ 0x78c6770, "pci_disable_pcie_error_reporting" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x250ffaa1, "dma_direct_map_sg" },
	{ 0xb1a0cc62, "nvme_submit_sync_cmd" },
	{ 0x42d54e91, "blk_mq_quiesce_queue" },
	{ 0x886ca932, "blk_mq_unquiesce_queue" },
	{ 0xedc03953, "iounmap" },
	{ 0x24847958, "nvme_start_ctrl" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xf3d9d791, "nvme_start_freeze" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0x65b3cec0, "nvme_setup_cmd" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xd45434ee, "admin_timeout" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xe51a3b9a, "nvme_alloc_request" },
	{ 0x828aa1fe, "nvme_start_queues" },
	{ 0x55f5019b, "__kmalloc_node" },
	{ 0x121da905, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x28318305, "snprintf" },
	{ 0x6548e55e, "pci_enable_device_mem" },
	{ 0xb403fa2f, "nvme_wait_freeze_timeout" },
	{ 0x48132457, "pci_release_selected_regions" },
	{ 0xffd1cf64, "nvme_reset_ctrl_sync" },
	{ 0x2ca6809b, "pci_request_selected_regions" },
	{ 0x72ce5d32, "nvme_complete_rq" },
	{ 0x432fe2e1, "dma_pool_create" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x2ebe1831, "nvme_uninit_ctrl" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0x89a5f4cb, "__do_once_done" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nvme-core";

MODULE_ALIAS("pci:v00008086d00000953sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A53sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A54sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A55sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000F1A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005845sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB1d00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C58d00000003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C58d00000023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C5Fd00000540sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000144Dd0000A821sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000144Dd0000A822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D1Dd00001F1Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D1Dd00002807sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D1Dd00002601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc01sc08i02*");
MODULE_ALIAS("pci:v0000106Bd00002001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00002003sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EC25404BBEC2E8C818243FB");
MODULE_INFO(rhelversion, "8.0");
