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
	{ 0x9a910d01, "simple_open" },
	{ 0x28cde093, "no_llseek" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x79a335e9, "debugfs_remove" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x27e1a049, "printk" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xc6cbbc89, "capable" },
	{ 0xfb578fc5, "memset" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0x69f8785f, "__cpu_present_mask" },
	{ 0x177847e, "cpu_info" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x28318305, "snprintf" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x9a248381, "pcim_iomap_regions" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x618911fc, "numa_node" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xf99d347e, "node_states" },
	{ 0x763354f5, "fsync_bdev" },
	{ 0x570add14, "sysfs_remove_file_ns" },
	{ 0x52887593, "pcim_iounmap_regions" },
	{ 0x88cfc160, "pci_disable_msi" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xa29be9f7, "blk_freeze_queue_start" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0x5e90a196, "blk_set_queue_dying" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa8e2800c, "blk_mq_tagset_busy_iter" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x2ad9427a, "blk_mq_init_queue" },
	{ 0xa20b232a, "blk_mq_alloc_tag_set" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0xb0e602eb, "memmove" },
	{ 0x44e60b26, "ida_pre_get" },
	{ 0x9fed5c45, "ida_get_new_above" },
	{ 0x342ce1f6, "__alloc_disk_node" },
	{ 0xd63aa88f, "bdput" },
	{ 0x3c87b9a5, "blk_queue_max_discard_sectors" },
	{ 0x5d11132b, "debugfs_remove_recursive" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcca03002, "cpu_bit_bitmap" },
	{ 0x25d35c2d, "devm_request_threaded_irq" },
	{ 0x1ec97303, "dev_driver_string" },
	{ 0xdcd000b8, "kmem_cache_alloc_node_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd5184fc1, "pcim_iomap_table" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2cec6038, "kobject_put" },
	{ 0x1daf1f8d, "sysfs_create_file_ns" },
	{ 0xa9c2cec5, "kobject_get" },
	{ 0xc273714d, "bdget_disk" },
	{ 0x36fcc755, "device_add_disk" },
	{ 0xd9846e51, "blk_queue_io_min" },
	{ 0x1ad357ca, "blk_queue_max_segment_size" },
	{ 0x51722f38, "blk_queue_max_hw_sectors" },
	{ 0x1eb86738, "blk_queue_physical_block_size" },
	{ 0x17c430a5, "blk_queue_max_segments" },
	{ 0x4b3cdcb2, "blk_queue_flag_clear" },
	{ 0x37a0cba, "kfree" },
	{ 0xcad615e2, "devm_free_irq" },
	{ 0x263074f8, "irq_set_affinity_hint" },
	{ 0x250ffaa1, "dma_direct_map_sg" },
	{ 0xea4fcb9c, "blk_rq_map_sg" },
	{ 0xe288808d, "blk_mq_start_request" },
	{ 0x14e4112, "down_trylock" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0xdd2723df, "del_gendisk" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x9a983107, "ida_remove" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2612ff0c, "put_disk" },
	{ 0x21f7fd27, "blk_mq_free_tag_set" },
	{ 0xc1a89ec, "blk_cleanup_queue" },
	{ 0x6fa4c42d, "blk_mq_free_request" },
	{ 0x5ba4171c, "blk_execute_rq" },
	{ 0xd11b710b, "blk_mq_alloc_request" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xa0b7be94, "pcim_enable_device" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0xcf2a6966, "up" },
	{ 0xbb8c805, "dma_direct_unmap_sg" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x44d14e59, "blk_mq_end_request" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x886ca932, "blk_mq_unquiesce_queue" },
	{ 0xf9a482f9, "msleep" },
	{ 0x42d54e91, "blk_mq_quiesce_queue" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0xe6478472, "_dev_info" },
	{ 0xafbe9d9d, "pci_find_capability" },
	{ 0xa1ffbb27, "blk_mq_tag_to_rq" },
	{ 0x121da905, "queue_work_on" },
	{ 0x91715312, "sprintf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xf0191bff, "dmam_alloc_attrs" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xc6f83a65, "blk_abort_request" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x81348cf2, "node_to_cpumask_map" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x703b8f8f, "dmam_free_coherent" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8519f7c, "blk_mq_complete_request" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb549bffc, "blk_queue_flag_set" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001344d00005150sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001344d00005151sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001344d00005152sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001344d00005153sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001344d00005160sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001344d00005161sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001344d00005163sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "98EB7C82FED433F8E6C9EB9");
MODULE_INFO(rhelversion, "8.0");
