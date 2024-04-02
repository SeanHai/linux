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
	{ 0x5b5a9263, "skb_trim" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9c52224c, "ip_set_put_extensions" },
	{ 0x318f7969, "add_timer" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x397f6231, "ip_set_free" },
	{ 0xfb578fc5, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xf3b4d4ae, "ip_set_alloc" },
	{ 0x86bb13e0, "ip_set_elem_len" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x54a6dd19, "ip_set_extensions" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x754d539c, "strlen" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xb5f2ac4d, "ip_set_get_ip_port" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x3bbda53d, "ip_set_get_extensions" },
	{ 0x7e0ed074, "ip_set_match_extensions" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_set";


MODULE_INFO(srcversion, "C84D22139D66D640C368895");
MODULE_INFO(rhelversion, "8.0");
