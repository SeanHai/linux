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
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x9b2420a5, "tcf_unregister_action" },
	{ 0x2988ef6c, "tcf_register_action" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd402a2e7, "tcf_idr_insert" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7b4dafb6, "tcf_idr_cleanup" },
	{ 0xcd5371ef, "dev_get_by_index" },
	{ 0xc6f06034, "tcf_idr_create" },
	{ 0x87adfe16, "__tcf_idr_release" },
	{ 0x8926aa87, "tcf_idr_check_alloc" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x27e1a049, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x5def83f9, "skb_push" },
	{ 0x9688b47c, "dev_queue_xmit" },
	{ 0x9ed2ac08, "netif_receive_skb" },
	{ 0xdfa89d8, "skb_pull_rcsum" },
	{ 0x8c24bd72, "skb_clone" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdf40da5f, "nla_put_64bit" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x863d2883, "tcf_idr_search" },
	{ 0x291acd6f, "tcf_generic_walker" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0xf1421bea, "tcf_idrinfo_destroy" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "08CE7F59C9B14B4FF2B4BAE");
MODULE_INFO(rhelversion, "8.0");
