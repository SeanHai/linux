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
	{ 0xdd926335, "unregister_qdisc" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x43d0701a, "free_netdev" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x69f77094, "register_qdisc" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x9599bf40, "alloc_netdev_mqs" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8df939f1, "__neigh_event_send" },
	{ 0xaf737be8, "__neigh_create" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0x509f625d, "consume_skb" },
	{ 0x821aac91, "neigh_destroy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x865485d7, "neigh_lookup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa44ddd13, "noop_qdisc" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x5259ede5, "qdisc_reset" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xf71e8617, "skb_queue_purge" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BE7E24DAE7A145F1F627986");
MODULE_INFO(rhelversion, "8.0");
