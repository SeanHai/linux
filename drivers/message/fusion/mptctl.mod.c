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
	{ 0x28cde093, "no_llseek" },
	{ 0x610b257e, "mpt_reset_deregister" },
	{ 0xe6c1e126, "mpt_event_deregister" },
	{ 0x74a0134a, "mpt_device_driver_deregister" },
	{ 0x5c369789, "mpt_event_register" },
	{ 0x3ce82171, "mpt_reset_register" },
	{ 0x981efe92, "mpt_deregister" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0x67835d30, "mpt_register" },
	{ 0x6bddef80, "misc_register" },
	{ 0x4688178c, "mpt_device_driver_register" },
	{ 0xa10f989e, "mpt_HardResetHandler" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xbf80dcf4, "mpt_alloc_fw_memory" },
	{ 0x84ea4101, "mpt_free_fw_memory" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xb3b42a38, "mutex_trylock" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x76d1f14a, "__scsi_iterate_devices" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x37a0cba, "kfree" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x36b3d463, "dma_ops" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x9166fada, "strncpy" },
	{ 0x754d539c, "strlen" },
	{ 0x444f1b47, "mpt_put_msg_frame" },
	{ 0xf0116521, "mpt_GetIocState" },
	{ 0x28318305, "snprintf" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x305fd80d, "mpt_config" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x8fd890e2, "mpt_verify_adapter" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xa379aa6d, "mpt_halt_firmware" },
	{ 0x2df1adac, "mpt_Soft_Hard_ResetHandler" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x502108d0, "mpt_fwfault_debug" },
	{ 0x4c326bef, "mpt_put_msg_frame_hi_pri" },
	{ 0x42125cf8, "mpt_free_msg_frame" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x39248f6e, "mpt_send_handshake_request" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x90ad2545, "mpt_get_msg_frame" },
	{ 0xa0e5a633, "mpt_set_taskmgmt_in_progress_flag" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xeb6b6275, "fasync_helper" },
	{ 0xdd805159, "ioc_list" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc6031860, "mpt_clear_taskmgmt_in_progress_flag" },
	{ 0x29361773, "complete" },
	{ 0x27e1a049, "printk" },
	{ 0xf2536a31, "kill_fasync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mptbase";


MODULE_INFO(srcversion, "6863AA080547133B371AF73");
MODULE_INFO(rhelversion, "8.0");
