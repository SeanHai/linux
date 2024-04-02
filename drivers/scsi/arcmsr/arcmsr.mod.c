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
	{ 0x2d3385d3, "system_wq" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9706372e, "scsi_change_queue_depth" },
	{ 0xde455655, "pci_free_irq_vectors" },
	{ 0x9b76f02f, "sysfs_remove_bin_file" },
	{ 0x9b5d76b9, "scsi_host_alloc" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0xb559ea59, "scsi_add_host_with_dma" },
	{ 0xf50eb3eb, "scsi_remove_device" },
	{ 0x63a67594, "scsi_bios_ptable" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xf062ac06, "pci_enable_wake" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x9867faf6, "scsi_cmd_get_serial" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x91715312, "sprintf" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x898c27fe, "pci_alloc_irq_vectors_affinity" },
	{ 0xfb578fc5, "memset" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x7bdd5516, "scsi_scan_host" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x318f7969, "add_timer" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xefd9029, "scsi_host_put" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x733dc065, "scsi_device_put" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc6cbbc89, "capable" },
	{ 0xe6478472, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x408bd9c1, "scsi_add_device" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd2491c3c, "scsi_device_lookup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa44d2dc1, "pci_irq_vector" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x4afe9a77, "scsi_partsize" },
	{ 0x9d63b41f, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xa8af86d0, "sysfs_create_bin_file" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x7256f41e, "scsi_remove_host" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0xee7915ff, "pci_choose_state" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0xe94d9e1d, "scsi_dma_map" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000017D3d00001110sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001120sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001130sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001160sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001170sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001202sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001203sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001210sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001214sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001220sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001230sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001260sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001270sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001280sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001380sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001381sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001680sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001880sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001884sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0B09D3E9B83276614689ABB");
MODULE_INFO(rhelversion, "8.0");
