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
	{ 0x705d6cd1, "ip_set_type_unregister" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x5111b4c3, "ip_set_type_register" },
	{ 0x5792f848, "strlcpy" },
	{ 0x754d539c, "strlen" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x318f7969, "add_timer" },
	{ 0x7e0ed074, "ip_set_match_extensions" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x86bb13e0, "ip_set_elem_len" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf3b4d4ae, "ip_set_alloc" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x27e1a049, "printk" },
	{ 0x9c52224c, "ip_set_put_extensions" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x397f6231, "ip_set_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x54a6dd19, "ip_set_extensions" },
	{ 0x7924b6de, "ip_set_hostmask_map" },
	{ 0xa293f8a6, "ip_set_get_ipaddr4" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3bbda53d, "ip_set_get_extensions" },
	{ 0x9e98722b, "ip_set_get_ipaddr6" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x81fff2d1, "ip_set_netmask_map" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_set";


MODULE_INFO(srcversion, "B89F6CB8E625C6BC9ADC221");
MODULE_INFO(rhelversion, "8.0");
