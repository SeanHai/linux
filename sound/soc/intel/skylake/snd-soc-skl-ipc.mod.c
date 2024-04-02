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
	{ 0x58388972, "pv_lock_ops" },
	{ 0xe9c6de99, "sst_shim32_write" },
	{ 0xe615ea96, "sst_dsp_shim_write" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf865cf7d, "sst_memcpy_toio_32" },
	{ 0xfc004657, "sst_dsp_inbox_read" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x2bc359c1, "sst_dsp_outbox_write" },
	{ 0x6fc57aaf, "sst_dsp_shim_update_bits" },
	{ 0xc59f0edb, "sst_ipc_tx_msg_reply_complete" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3dd6ec5b, "sst_dsp_mailbox_init" },
	{ 0x16e86983, "sst_shim32_read" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x483d8d92, "sst_dsp_shim_read" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5a63ce91, "sst_ipc_init" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x42b7d37a, "sst_dsp_shim_update_bits_forced" },
	{ 0xf36c8555, "sst_dsp_shim_update_bits_unlocked" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xaa50aeb4, "sst_ipc_fini" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x15f836f3, "sst_dsp_shim_read_unlocked" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xe6478472, "_dev_info" },
	{ 0xd78fdb58, "sst_ipc_tx_message_nopm" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4ccab768, "sst_ipc_tx_message_nowait" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x51395c40, "sst_memcpy_fromio_32" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xb544f062, "sst_dsp_shim_write_unlocked" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0x4e0d77e6, "sst_ipc_tx_message_wait" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x3698ad77, "sst_dsp_register_poll" },
	{ 0x84277b2a, "release_firmware" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-sst-dsp,snd-soc-sst-ipc";


MODULE_INFO(srcversion, "D5E89FD6F63632415EC8E7E");
MODULE_INFO(rhelversion, "8.0");
