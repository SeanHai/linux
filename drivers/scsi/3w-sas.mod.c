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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x85d45f4d, "noop_llseek" },
	{ 0x9706372e, "scsi_change_queue_depth" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x581fae3c, "__register_chrdev" },
	{ 0xa8af86d0, "sysfs_create_bin_file" },
	{ 0x7bdd5516, "scsi_scan_host" },
	{ 0xb559ea59, "scsi_add_host_with_dma" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x9b5d76b9, "scsi_host_alloc" },
	{ 0xb99b4c70, "sdev_prefix_printk" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x661bca60, "scsi_block_requests" },
	{ 0x1057db90, "scsi_unblock_requests" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xe87f9ea8, "pci_try_set_mwi" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0xf062ac06, "pci_enable_wake" },
	{ 0x88cfc160, "pci_disable_msi" },
	{ 0xefd9029, "scsi_host_put" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x7256f41e, "scsi_remove_host" },
	{ 0x9b76f02f, "sysfs_remove_bin_file" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0xee7915ff, "pci_choose_state" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x9d63b41f, "scsi_dma_unmap" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9867faf6, "scsi_cmd_get_serial" },
	{ 0xf03b8cb9, "blk_queue_rq_timeout" },
	{ 0x28318305, "snprintf" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x65e0d6d7, "memory_read_from_buffer" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc6cbbc89, "capable" },
	{ 0x27e1a049, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x754d539c, "strlen" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x91715312, "sprintf" },
	{ 0x87b8798d, "sg_next" },
	{ 0xe94d9e1d, "scsi_dma_map" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000013C1d00001010sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CC3C7BE4454E3EEEB7B168A");
MODULE_INFO(rhelversion, "8.0");
