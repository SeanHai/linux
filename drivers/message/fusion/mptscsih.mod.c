#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x9706372e, "scsi_change_queue_depth" },
	{ 0x661bca60, "scsi_block_requests" },
	{ 0xa0e5a633, "mpt_set_taskmgmt_in_progress_flag" },
	{ 0xa10f989e, "mpt_HardResetHandler" },
	{ 0x1057db90, "scsi_unblock_requests" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x90ad2545, "mpt_get_msg_frame" },
	{ 0x87b8798d, "sg_next" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xa379aa6d, "mpt_halt_firmware" },
	{ 0x337bba2d, "scsi_print_command" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f45f0e, "mpt_raid_phys_disk_get_num_paths" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x39248f6e, "mpt_send_handshake_request" },
	{ 0xb99b4c70, "sdev_prefix_printk" },
	{ 0x502108d0, "mpt_fwfault_debug" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xefd9029, "scsi_host_put" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x444f1b47, "mpt_put_msg_frame" },
	{ 0x753e2398, "mpt_resume" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2df1adac, "mpt_Soft_Hard_ResetHandler" },
	{ 0xf0116521, "mpt_GetIocState" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x84e4ef5d, "mpt_raid_phys_disk_pg1" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d63b41f, "scsi_dma_unmap" },
	{ 0xeba25f56, "mpt_print_ioc_summary" },
	{ 0x9881549, "blk_queue_dma_alignment" },
	{ 0x29361773, "complete" },
	{ 0x28318305, "snprintf" },
	{ 0x42125cf8, "mpt_free_msg_frame" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x6ef04670, "mpt_suspend" },
	{ 0x95ad910f, "mpt_detach" },
	{ 0xc6031860, "mpt_clear_taskmgmt_in_progress_flag" },
	{ 0xe94d9e1d, "scsi_dma_map" },
	{ 0x4c326bef, "mpt_put_msg_frame_hi_pri" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mptbase";


MODULE_INFO(srcversion, "753310B2CC278A39D62F31F");
MODULE_INFO(rhelversion, "8.0");
