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
	{ 0xec89da9c, "param_ops_ushort" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xf409873e, "phy_driver_unregister" },
	{ 0xd0c86c05, "put_device" },
	{ 0x777a004e, "phy_driver_register" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xd5b20c20, "skb_complete_tx_timestamp" },
	{ 0xade87869, "ptp_clock_event" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x630630ad, "ptp_clock_unregister" },
	{ 0xf71e8617, "skb_queue_purge" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0xb8c8d6d0, "ptp_clock_register" },
	{ 0x85ffabba, "get_device" },
	{ 0x28318305, "snprintf" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xbca18818, "skb_queue_head" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0xfca44c56, "netif_rx_ni" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdffe77f8, "ptp_find_pin" },
	{ 0x27e1a049, "printk" },
	{ 0xcf1309ab, "dev_mc_del" },
	{ 0xc8df8267, "dev_mc_add" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb8ded467, "genphy_soft_reset" },
	{ 0x5964e65e, "mdiobus_write" },
	{ 0xf1ac43f5, "mdiobus_read" },
	{ 0xf7b182b1, "ptp_clock_index" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("mdio:0010000000000000010111001110????");

MODULE_INFO(srcversion, "E9E6504C7D9375000BE9C28");
MODULE_INFO(rhelversion, "8.0");
