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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf03b8cb9, "blk_queue_rq_timeout" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9706372e, "scsi_change_queue_depth" },
	{ 0xde455655, "pci_free_irq_vectors" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0x9b5d76b9, "scsi_host_alloc" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0xb559ea59, "scsi_add_host_with_dma" },
	{ 0x51722f38, "blk_queue_max_hw_sectors" },
	{ 0xf50eb3eb, "scsi_remove_device" },
	{ 0x43132b0b, "pci_irq_get_affinity" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xe637fa94, "dev_printk" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x25170ad2, "down_interruptible" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x581fae3c, "__register_chrdev" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3c92d494, "scmd_printk" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xf062ac06, "pci_enable_wake" },
	{ 0x999e8297, "vfree" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xd15546f9, "blk_queue_virt_boundary" },
	{ 0x91715312, "sprintf" },
	{ 0x60b40fd8, "copy_user_enhanced_fast_string" },
	{ 0x337bba2d, "scsi_print_command" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x898c27fe, "pci_alloc_irq_vectors_affinity" },
	{ 0xfb578fc5, "memset" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0xe5772d4a, "copy_user_generic_string" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xeb6b6275, "fasync_helper" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x7bdd5516, "scsi_scan_host" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0xb99b4c70, "sdev_prefix_printk" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x85d45f4d, "noop_llseek" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x318f7969, "add_timer" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x373db350, "kstrtoint" },
	{ 0xf7a5f713, "mark_tech_preview" },
	{ 0xefd9029, "scsi_host_put" },
	{ 0x4d7d976d, "blk_queue_update_dma_alignment" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe7b9136, "pci_device_support_removed" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xafbe9d9d, "pci_find_capability" },
	{ 0x2ae2fdba, "dev_notice" },
	{ 0x733dc065, "scsi_device_put" },
	{ 0xdcc3a419, "copy_user_generic_unrolled" },
	{ 0xe68fed60, "pci_select_bars" },
	{ 0xc6cbbc89, "capable" },
	{ 0xe6478472, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x408bd9c1, "scsi_add_device" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xb549bffc, "blk_queue_flag_set" },
	{ 0xa9597102, "driver_create_file" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xd2491c3c, "scsi_device_lookup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xcd8dd495, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x76d1f14a, "__scsi_iterate_devices" },
	{ 0xa44d2dc1, "pci_irq_vector" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d63b41f, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0xbffde8ec, "compat_alloc_user_space" },
	{ 0xcf2a6966, "up" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xf2536a31, "kill_fasync" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x7256f41e, "scsi_remove_host" },
	{ 0x227e1d40, "driver_remove_file" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x121da905, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x28318305, "snprintf" },
	{ 0xee7915ff, "pci_choose_state" },
	{ 0x6548e55e, "pci_enable_device_mem" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x48132457, "pci_release_selected_regions" },
	{ 0x2ca6809b, "pci_request_selected_regions" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x432fe2e1, "dma_pool_create" },
	{ 0xc2e587d1, "reset_devices" },
	{ 0x7da99cdd, "clear_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0xe94d9e1d, "scsi_dma_map" },
	{ 0x81e6b37f, "dmi_get_system_info" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001000d00000411sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000007Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000078sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000079sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000073sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000071sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000413sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000005Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000002Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000005Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000005Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000CEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000CFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000052sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000053sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000016sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000017sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000001Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000001Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000010E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000010E2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000010E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000010E6sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A92DF2E7AB335B62942E156");
MODULE_INFO(rhelversion, "8.0");
