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
	{ 0xc1f30fe4, "ieee80211_rx_irqsafe" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4c912ad5, "rtl_swlps_beacon" },
	{ 0xc91d7b5e, "rtl_deinit_deferred_work" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0x63fdc40e, "rtl_efuse_ops_init" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x9d83146a, "rtl_deinit_core" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x6b486a75, "ieee80211_beacon_get_tim" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x151d7955, "ieee80211_unregister_hw" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x338574b, "read_efuse_byte" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x75c58e09, "rtl_collect_scan_list" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0x848be64a, "ieee80211_stop_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x4e94cd48, "rtl_global_var" },
	{ 0xc94fb8eb, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x194811f6, "ieee80211_alloc_hw_nm" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd85c1b05, "rtl_init_core" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x7a00e753, "rtl_action_proc" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x3bfae68b, "__dev_kfree_skb_irq" },
	{ 0xb35eeaa3, "rtl_lps_change_work_callback" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x1bb4f73a, "rtl_init_rx_config" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x97e05663, "rtl_tid_to_ac" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9a68601e, "ieee80211_tx_status_irqsafe" },
	{ 0x615cfd8, "rtl_ops" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xcda025bf, "rtl_deinit_rfkill" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x657f30cb, "rtl_p2p_info" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x80deca47, "ieee80211_wake_queue" },
	{ 0xba221020, "ieee80211_register_hw" },
	{ 0x7b580881, "rtl_lps_leave" },
	{ 0x71c6da4d, "rtl_recognize_peer" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x1ceb558d, "rtl_is_special_data" },
	{ 0x88cfc160, "pci_disable_msi" },
	{ 0x3e2185b0, "rtl_tx_ackqueue" },
	{ 0x5c6bbddf, "rtl_init_rfkill" },
	{ 0x275d5ec2, "ieee80211_free_hw" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0x29361773, "complete" },
	{ 0x6fc8771b, "rtl_c2hcmd_enqueue" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0x509f625d, "consume_skb" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x182e6a98, "rtl_tx_mgmt_proc" },
	{ 0xa515515f, "rtl_beacon_statistic" },
	{ 0xf6e09477, "pcie_capability_read_word" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,rtlwifi";


MODULE_INFO(srcversion, "F461E634C6D4807FEF16D9C");
MODULE_INFO(rhelversion, "8.0");
