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
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0xb559ea59, "scsi_add_host_with_dma" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x9b5d76b9, "scsi_host_alloc" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0xf062ac06, "pci_enable_wake" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x12a38747, "usleep_range" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x1000e51, "schedule" },
	{ 0x257bfbc2, "scsi_rescan_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf7d6636f, "current_task" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x27e1a049, "printk" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xefd9029, "scsi_host_put" },
	{ 0x7256f41e, "scsi_remove_host" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0xee7915ff, "pci_choose_state" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xbb8c805, "dma_direct_unmap_sg" },
	{ 0x250ffaa1, "dma_direct_map_sg" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0x9867faf6, "scsi_cmd_get_serial" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3c92d494, "scmd_printk" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0xc94fb8eb, "pci_iounmap" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x733dc065, "scsi_device_put" },
	{ 0xf50eb3eb, "scsi_remove_device" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x408bd9c1, "scsi_add_device" },
	{ 0xd2491c3c, "scsi_device_lookup" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001B4Bd00009143sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B4Bd00009580sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D02F1D8842CFAE8505EA0AD");
MODULE_INFO(rhelversion, "8.0");
