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
	{ 0xf9a482f9, "msleep" },
	{ 0x7df96bcf, "crypto_dequeue_request" },
	{ 0x17d25c1, "kthread_destroy_worker" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0x5186aca3, "crypto_enqueue_request" },
	{ 0xe6478472, "_dev_info" },
	{ 0xdfaf80c3, "kthread_queue_work" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb9d80e63, "sched_setscheduler" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x28318305, "snprintf" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x15c0e164, "kthread_create_worker" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "ABDECB1C0B73CB274D20855");
MODULE_INFO(rhelversion, "8.0");
