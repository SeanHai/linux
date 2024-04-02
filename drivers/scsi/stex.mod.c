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
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x7bdd5516, "scsi_scan_host" },
	{ 0xb559ea59, "scsi_add_host_with_dma" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x28318305, "snprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x8c69e82c, "pci_ioremap_bar" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x9b5d76b9, "scsi_host_alloc" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x3c92d494, "scmd_printk" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x121da905, "queue_work_on" },
	{ 0x69acdf38, "memcpy" },
	{ 0x87b8798d, "sg_next" },
	{ 0xe94d9e1d, "scsi_dma_map" },
	{ 0xe637fa94, "dev_printk" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xefd9029, "scsi_host_put" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x661bca60, "scsi_block_requests" },
	{ 0x7256f41e, "scsi_remove_host" },
	{ 0x9d63b41f, "scsi_dma_unmap" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x9867faf6, "scsi_cmd_get_serial" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0xf03b8cb9, "blk_queue_rq_timeout" },
	{ 0x88cfc160, "pci_disable_msi" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x27e1a049, "printk" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0xf9a482f9, "msleep" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xfb578fc5, "memset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v0000105Ad00008350sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad0000C350sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00004302sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad0000E350sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00007250sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00008650sv0000105Asd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00008650sv00001033sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00008760sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00008870sv0000105Asd00008870bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00008870sv0000105Asd00004300bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00008871sv0000105Asd00004311bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00008871sv0000105Asd00004312bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00008871sv0000105Asd00004321bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00008871sv0000105Asd00004322bc*sc*i*");

MODULE_INFO(srcversion, "9B4F18458ED138A4C9D44C4");
MODULE_INFO(rhelversion, "8.0");
