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
	{ 0x2d3385d3, "system_wq" },
	{ 0xc1f30fe4, "ieee80211_rx_irqsafe" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4b452ff1, "cfg80211_unlink_bss" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x6b486a75, "ieee80211_beacon_get_tim" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x849918cb, "ieee80211_resume_disconnect" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7a4f565c, "rate_control_send_low" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xe2d2e91f, "freq_reg_info" },
	{ 0xbf420674, "wiphy_rfkill_start_polling" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x16e9a4fd, "skb_unlink" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0xb5a8d234, "cancel_delayed_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x86aedcfa, "cfg80211_get_bss" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x101fd738, "ieee80211_rate_control_register" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xabec451b, "wiphy_apply_custom_regulatory" },
	{ 0x3bfae68b, "__dev_kfree_skb_irq" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x5ee2df37, "wiphy_rfkill_stop_polling" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe9a6ccc, "wiphy_to_ieee80211_hw" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x56754ef4, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdfbde140, "cfg80211_put_bss" },
	{ 0x12a38747, "usleep_range" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd252a816, "wiphy_rfkill_set_hw_state" },
	{ 0x9a68601e, "ieee80211_tx_status_irqsafe" },
	{ 0x70144638, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x10aedc69, "ieee80211_get_hdrlen_from_skb" },
	{ 0xbbfa53d0, "ieee80211_rate_control_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa9634f3, "ieee80211_start_tx_ba_session" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x121da905, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x84277b2a, "release_firmware" },
	{ 0xc01dc7db, "ieee80211_connection_loss" },
	{ 0x69e1549c, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xf9ffe550, "device_set_wakeup_enable" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211";


MODULE_INFO(srcversion, "BD2B6DBADE667F4F0EE035C");
MODULE_INFO(rhelversion, "8.0");
