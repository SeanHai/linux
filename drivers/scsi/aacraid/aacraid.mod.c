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
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf03b8cb9, "blk_queue_rq_timeout" },
	{ 0x405c1144, "get_seconds" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9706372e, "scsi_change_queue_depth" },
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x9b5d76b9, "scsi_host_alloc" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0xb559ea59, "scsi_add_host_with_dma" },
	{ 0x661bca60, "scsi_block_requests" },
	{ 0x63a67594, "scsi_bios_ptable" },
	{ 0xf50eb3eb, "scsi_remove_device" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x1057db90, "scsi_unblock_requests" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x862fba34, "pci_disable_msix" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x25170ad2, "down_interruptible" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x448eac3e, "kmemdup" },
	{ 0x581fae3c, "__register_chrdev" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xf062ac06, "pci_enable_wake" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x60b40fd8, "copy_user_enhanced_fast_string" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd09eff23, "dma_get_required_mask" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x898c27fe, "pci_alloc_irq_vectors_affinity" },
	{ 0xfb578fc5, "memset" },
	{ 0xdba47dbc, "pci_enable_pcie_error_reporting" },
	{ 0x257bfbc2, "scsi_rescan_device" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x14e4112, "down_trylock" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xe5772d4a, "copy_user_generic_string" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0x7bdd5516, "scsi_scan_host" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0xb99b4c70, "sdev_prefix_printk" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x85d45f4d, "noop_llseek" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xefd9029, "scsi_host_put" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe7b9136, "pci_device_support_removed" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0xafbe9d9d, "pci_find_capability" },
	{ 0x733dc065, "scsi_device_put" },
	{ 0xdcc3a419, "copy_user_generic_unrolled" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0xe6478472, "_dev_info" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x96393c2a, "pci_disable_link_state" },
	{ 0x408bd9c1, "scsi_add_device" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0x709bd92f, "pci_cleanup_aer_uncorrect_error_status" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd2491c3c, "scsi_device_lookup" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd855d813, "scsi_device_set_state" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x76d1f14a, "__scsi_iterate_devices" },
	{ 0xa44d2dc1, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x78c6770, "pci_disable_pcie_error_reporting" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d63b41f, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x88cfc160, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0xbffde8ec, "compat_alloc_user_space" },
	{ 0xcf2a6966, "up" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x7256f41e, "scsi_remove_host" },
	{ 0x28318305, "snprintf" },
	{ 0xee7915ff, "pci_choose_state" },
	{ 0x6548e55e, "pci_enable_device_mem" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xc2e587d1, "reset_devices" },
	{ 0x7da99cdd, "clear_user" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0xe94d9e1d, "scsi_dma_map" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001028d00000001sv00001028sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000002sv00001028sd00000002bc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000003sv00001028sd00000003bc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000004sv00001028sd000000D0bc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000002sv00001028sd000000D1bc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000002sv00001028sd000000D9bc*sc*i*");
MODULE_ALIAS("pci:v00001028d0000000Asv00001028sd00000106bc*sc*i*");
MODULE_ALIAS("pci:v00001028d0000000Asv00001028sd0000011Bbc*sc*i*");
MODULE_ALIAS("pci:v00001028d0000000Asv00001028sd00000121bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000283sv00009005sd00000283bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000284sv00009005sd00000284bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000286bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000285bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000287bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv000017AAsd00000286bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv000017AAsd00000287bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000288bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000289bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd0000028Abc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd0000028Bbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd0000028Cbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd0000028Dbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd0000029Bbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd0000029Cbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd0000029Dbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd0000029Ebc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd0000029Fbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd000002A0bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd000002A1bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd000002A3bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd000002A4bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd000002A5bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd000002A6bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000287sv00009005sd00000800bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000200sv00009005sd00000200bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd00000800bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd0000028Ebc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd0000028Fbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000290bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00001028sd00000291bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000292bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000293bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000294bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv0000103Csd00003227bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000296bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000297bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00001014sd000002F2bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00001014sd00000312bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00001014sd00009580bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00001014sd00009540bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000298bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000299bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd0000029Abc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd000002A2bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00001028sd00000287bc*sc*i*");
MODULE_ALIAS("pci:v00001011d00000046sv00009005sd00000365bc*sc*i*");
MODULE_ALIAS("pci:v00001011d00000046sv00009005sd00000364bc*sc*i*");
MODULE_ALIAS("pci:v00001011d00000046sv00009005sd00001364bc*sc*i*");
MODULE_ALIAS("pci:v00001011d00000046sv0000103Csd000010C2bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00001028sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv000017AAsd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000288sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Dsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3B4CD95B2D3BECE8271EF5D");
MODULE_INFO(rhelversion, "8.0");
