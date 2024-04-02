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
	{ 0xe3fde125, "fw_csr_iterator_next" },
	{ 0x9be223b, "fw_device_enable_phys_dma" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x93ac2ae4, "driver_register" },
	{ 0xe09c5e60, "__scsi_add_device" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x9b5d76b9, "scsi_host_alloc" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xb559ea59, "scsi_add_host_with_dma" },
	{ 0x661bca60, "scsi_block_requests" },
	{ 0x51722f38, "blk_queue_max_hw_sectors" },
	{ 0xf50eb3eb, "scsi_remove_device" },
	{ 0x2a882571, "fw_send_request" },
	{ 0x1057db90, "scsi_unblock_requests" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x4e94b037, "fw_bus_type" },
	{ 0x87b8798d, "sg_next" },
	{ 0xe80e5087, "fw_csr_iterator_init" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x91715312, "sprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x3c56ef91, "fw_workqueue" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xc351790f, "driver_unregister" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0xefd9029, "scsi_host_put" },
	{ 0x4d7d976d, "blk_queue_update_dma_alignment" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2ae2fdba, "dev_notice" },
	{ 0x733dc065, "scsi_device_put" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x90e9add4, "fw_cancel_transaction" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xd2491c3c, "scsi_device_lookup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xf49649cb, "fw_core_add_address_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xec88350c, "fw_core_remove_address_handler" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d63b41f, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7256f41e, "scsi_remove_host" },
	{ 0x29361773, "complete" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xaedf84ce, "fw_high_memory_region" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x807ab5cb, "fw_run_transaction" },
	{ 0x6da974ae, "fw_send_response" },
	{ 0xe94d9e1d, "scsi_dma_map" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=firewire-core";

MODULE_ALIAS("ieee1394:ven*mo*sp0000609Ever00010483*");

MODULE_INFO(srcversion, "73DCAD28603627DA213EE47");
MODULE_INFO(rhelversion, "8.0");
