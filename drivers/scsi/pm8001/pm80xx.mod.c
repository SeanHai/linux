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
	{ 0x45129f0f, "sas_change_queue_depth" },
	{ 0xbb8c805, "dma_direct_unmap_sg" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3abba457, "sas_release_transport" },
	{ 0xde455655, "pci_free_irq_vectors" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x9b5d76b9, "scsi_host_alloc" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0xb559ea59, "scsi_add_host_with_dma" },
	{ 0x661bca60, "scsi_block_requests" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x286cf33, "sas_drain_work" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xe637fa94, "dev_printk" },
	{ 0xd67e02a3, "sas_ssp_task_response" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x77fc2722, "sas_suspend_ha" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xf062ac06, "pci_enable_wake" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x91715312, "sprintf" },
	{ 0xca482dd2, "sas_phy_reset" },
	{ 0x62ef911, "sas_eh_target_reset_handler" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2b912dfc, "sas_get_local_phy" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xab769aaf, "scsi_is_host_device" },
	{ 0x898c27fe, "pci_alloc_irq_vectors_affinity" },
	{ 0xc9aa8e76, "sas_target_alloc" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x22dd15fc, "sas_ioctl" },
	{ 0x9166fada, "strncpy" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x7bdd5516, "scsi_scan_host" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x318f7969, "add_timer" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xefd9029, "scsi_host_put" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x91082173, "sas_unregister_ha" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xd396a18, "sas_register_ha" },
	{ 0x521204d9, "sas_alloc_slow_task" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xa350a9d3, "sas_resume_ha" },
	{ 0xd0c86c05, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xdac7df67, "sas_target_destroy" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0xaabb3a1f, "sas_eh_device_reset_handler" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0x160227, "sas_queuecommand" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x453c8403, "pci_msi_enabled" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x642663cc, "sas_remove_host" },
	{ 0xa44d2dc1, "pci_irq_vector" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0xaec9def8, "sas_bios_param" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{ 0x250ffaa1, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xb1948941, "sas_free_task" },
	{ 0xf8a69479, "sas_prep_resume_ha" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x7256f41e, "scsi_remove_host" },
	{ 0x121da905, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x28318305, "snprintf" },
	{ 0xee7915ff, "pci_choose_state" },
	{ 0x713ee557, "sas_slave_configure" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x84277b2a, "release_firmware" },
	{ 0xa62a36a9, "sas_domain_attach_transport" },
	{ 0x36b3d463, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x93527c4c, "pci_save_state" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libsas,scsi_transport_sas";

MODULE_ALIAS("pci:v000011F8d00008001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F8d00008006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F8d00008008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F8d00008018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F8d00008009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F8d00008019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F8d00008074sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008074sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F8d00008076sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008076sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F8d00008077sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008077sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008081sv00009005sd00000400bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008081sv00009005sd00000800bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008088sv00009005sd00000008bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008088sv00009005sd00000800bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008089sv00009005sd00000008bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008089sv00009005sd00000800bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008088sv00009005sd00000016bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008088sv00009005sd00001600bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008089sv00009005sd00000016bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008089sv00009005sd00001600bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008074sv00009005sd00000800bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008076sv00009005sd00001600bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008077sv00009005sd00001600bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008074sv00009005sd00000008bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008076sv00009005sd00000016bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008077sv00009005sd00000016bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008076sv00009005sd00000808bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008077sv00009005sd00000808bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008074sv00009005sd00000404bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00008070sv0000117Csd00000070bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00008070sv0000117Csd00000071bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00008072sv0000117Csd00000072bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00008072sv0000117Csd00000073bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00008070sv0000117Csd00000080bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00008072sv0000117Csd00000081bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00008072sv0000117Csd00000082bc*sc*i*");

MODULE_INFO(srcversion, "9D8A3BC4450BFEFB48560FE");
MODULE_INFO(rhelversion, "8.0");
