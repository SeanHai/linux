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
	{ 0x139cee21, "wait_for_completion_io_timeout" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9706372e, "scsi_change_queue_depth" },
	{ 0x3abba457, "sas_release_transport" },
	{ 0xde455655, "pci_free_irq_vectors" },
	{ 0x9b5d76b9, "scsi_host_alloc" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xb559ea59, "scsi_add_host_with_dma" },
	{ 0x661bca60, "scsi_block_requests" },
	{ 0x27756bc8, "scsi_sanitize_inquiry_string" },
	{ 0xf50eb3eb, "scsi_remove_device" },
	{ 0x5c260ec4, "sas_port_free" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x4eab1ae7, "sas_phy_add" },
	{ 0x1057db90, "scsi_unblock_requests" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x25170ad2, "down_interruptible" },
	{ 0xc8cdabbb, "sas_port_add_phy" },
	{ 0x87b8798d, "sg_next" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x47a88059, "pcie_capability_clear_and_set_word" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xa797fcd, "sas_port_delete_phy" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xd61054c2, "sas_rphy_add" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x259acd8e, "sas_port_delete" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7efc8dd6, "blk_mq_unique_tag" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xdf263d83, "sas_attach_transport" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x898c27fe, "pci_alloc_irq_vectors_affinity" },
	{ 0xfb578fc5, "memset" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xebd935b0, "sas_end_device_alloc" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x72ea7b2d, "scsi_device_type" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x7c1372e8, "panic" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5792f848, "strlcpy" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xa9e17d7c, "sas_port_add" },
	{ 0x6626afca, "down" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x318f7969, "add_timer" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xefd9029, "scsi_host_put" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x91571dec, "sas_phy_free" },
	{ 0xe6478472, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x408bd9c1, "scsi_add_device" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd0c05159, "emergency_restart" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x68fbb187, "blk_mq_pci_map_queues" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd855d813, "scsi_device_set_state" },
	{ 0xdb8d7b58, "sas_phy_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa44d2dc1, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d63b41f, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x7e4f7dad, "sas_port_alloc_num" },
	{ 0xedc03953, "iounmap" },
	{ 0xcf2a6966, "up" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x55f5019b, "__kmalloc_node" },
	{ 0x7256f41e, "scsi_remove_host" },
	{ 0x121da905, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x28318305, "snprintf" },
	{ 0xee7915ff, "pci_choose_state" },
	{ 0x77bc13a0, "strim" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xc2e587d1, "reset_devices" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0xe94d9e1d, "scsi_dma_map" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_transport_sas";

MODULE_ALIAS("pci:v00009005d0000028Fsv0000105Bsd00001211bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000105Bsd00001321bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000152Dsd00008A22bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000152Dsd00008A23bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000152Dsd00008A24bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000152Dsd00008A36bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000152Dsd00008A37bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd00008460bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd00008461bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd0000F460bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd0000F461bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd00000045bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd00000046bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd00000047bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd00000048bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd0000004Abc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd0000004Bbc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd0000004Cbc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000110bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000608bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000800bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000801bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000802bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000803bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000804bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000805bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000806bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000807bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000900bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000901bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000902bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000903bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000904bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000905bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000906bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000907bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000908bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd0000090Abc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001200bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001201bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001202bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001280bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001281bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001282bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001300bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001301bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001302bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001303bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001380bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv000013FEsd00008312bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001028sd00001FE0bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000600bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000601bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000602bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000603bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000609bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000650bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000651bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000652bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000653bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000654bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000655bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000700bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000701bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00001001bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00001100bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00001101bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0174AA5C4EDE7BE3E72C28A");
MODULE_INFO(rhelversion, "8.0");
