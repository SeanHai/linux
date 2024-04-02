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
	{ 0xa1111ef4, "ath10k_ce_completed_recv_next_nolock" },
	{ 0xec3c53cc, "ath10k_htt_txrx_compl_task" },
	{ 0xb70bad5f, "ath10k_core_unregister" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x40027465, "ath10k_htt_t2h_msg_handler" },
	{ 0x63c8b394, "pci_release_region" },
	{ 0x696fa89e, "napi_disable" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0x3743d153, "ath10k_info" },
	{ 0x7c06c35b, "ath10k_coredump_new" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xb27b6ac5, "ath10k_core_register" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xa3a3e3c4, "ath10k_ce_init_pipe" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x36e4c87f, "ath10k_ce_deinit_pipe" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x4284ef2, "ath10k_htc_rx_completion_handler" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0x448eac3e, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xfca20cec, "ath10k_core_destroy" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3269448d, "ath10k_ce_completed_send_next_nolock" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x4604d0c3, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xd8719602, "ath10k_htt_rx_pktlog_completion_handler" },
	{ 0x35c8d17b, "__ath10k_ce_rx_num_free_bufs" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0xc94fb8eb, "pci_iounmap" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x53428746, "ath10k_core_create" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x3ed021c4, "ath10k_ce_rx_post_buf" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x4a3ea587, "ath10k_ce_enable_interrupts" },
	{ 0x5def83f9, "skb_push" },
	{ 0x1e00fc04, "ath10k_ce_per_engine_service_any" },
	{ 0xdc6594ef, "ath10k_ce_dump_registers" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x36db8cde, "ath10k_ce_completed_send_next" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0xa395c540, "ath10k_htc_tx_completion_handler" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0x3a0e4d32, "ath10k_ce_completed_recv_next" },
	{ 0x6e4edad6, "pci_clear_master" },
	{ 0x786add48, "ath10k_ce_revoke_recv_next" },
	{ 0xbdaa07c, "ath10k_ce_free_pipe" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xafe76281, "__ath10k_ce_send_revert" },
	{ 0xba6f161b, "ath10k_htt_hif_tx_complete" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0xe263450f, "ath10k_ce_rx_update_write_idx" },
	{ 0xbd51e506, "__napi_schedule" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbc7082f, "ath10k_ce_num_free_src_entries" },
	{ 0xb1b3f2ec, "ath10k_print_driver_info" },
	{ 0x1000e51, "schedule" },
	{ 0x3151afe1, "ath10k_err" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0x3038a6be, "ath10k_coredump_get_mem_layout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4a4a6081, "ath10k_ce_send" },
	{ 0xeae1a972, "ath10k_ce_cancel_send_next" },
	{ 0xc557ffe6, "ath10k_ce_per_engine_service" },
	{ 0x573eb915, "ath10k_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x88cfc160, "pci_disable_msi" },
	{ 0xc41c945e, "dma_direct_sync_single_for_device" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0x121da905, "queue_work_on" },
	{ 0xc8663645, "ath10k_ce_alloc_pipe" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xd47ccb52, "ath10k_ce_send_nolock" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xb0734f0, "pcie_capability_write_word" },
	{ 0x18c475b, "pci_request_region" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x36b3d463, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xf6e09477, "pcie_capability_read_word" },
	{ 0x8f79031e, "ath10k_ce_disable_interrupts" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ath10k_core";

MODULE_ALIAS("pci:v00000777d000011ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000003Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000003Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000046sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000050sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "496197CB61D7EEDCCE920A6");
MODULE_INFO(rhelversion, "8.0");
