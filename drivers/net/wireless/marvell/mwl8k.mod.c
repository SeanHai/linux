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
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xa9634f3, "ieee80211_start_tx_ba_session" },
	{ 0x69e1549c, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x56754ef4, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x6b486a75, "ieee80211_beacon_get_tim" },
	{ 0x70144638, "ieee80211_find_sta" },
	{ 0x89e66458, "device_release_driver" },
	{ 0xba221020, "ieee80211_register_hw" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x7b06b0d, "ieee80211_restart_hw" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xe6478472, "_dev_info" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb9f3ed41, "cfg80211_find_ie_match" },
	{ 0xf742168e, "ieee80211_stop_tx_ba_session" },
	{ 0x509f625d, "consume_skb" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0x194811f6, "ieee80211_alloc_hw_nm" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0x275d5ec2, "ieee80211_free_hw" },
	{ 0xc94fb8eb, "pci_iounmap" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x151d7955, "ieee80211_unregister_hw" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xd91c54f9, "ieee80211_find_sta_by_ifaddr" },
	{ 0x9a68601e, "ieee80211_tx_status_irqsafe" },
	{ 0x2ae2fdba, "dev_notice" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf1866b92, "ieee80211_stop_queues" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xf7d6636f, "current_task" },
	{ 0x29361773, "complete" },
	{ 0xe484e35f, "ioread32" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xac1ba2cd, "ieee80211_queue_work" },
	{ 0xa816dfec, "skb_copy" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc1f30fe4, "ieee80211_rx_irqsafe" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x37a0cba, "kfree" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x28318305, "snprintf" },
	{ 0x27e1a049, "printk" },
	{ 0x6e7e75f4, "request_firmware_nowait" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xd3ad0c22, "pskb_expand_head" },
	{ 0x5def83f9, "skb_push" },
	{ 0xfb578fc5, "memset" },
	{ 0xb0e602eb, "memmove" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x84277b2a, "release_firmware" },
	{ 0xd4cf92da, "ieee80211_wake_queues" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xe637fa94, "dev_printk" },
	{ 0xe8663ae6, "ieee80211_channel_to_frequency" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211";

MODULE_ALIAS("pci:v000011ABd00002A0Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A0Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A2Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A41sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A42sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A43sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002B36sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C0BC30AEE5A88FCF3575459");
MODULE_INFO(rhelversion, "8.0");
