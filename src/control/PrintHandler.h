/*
 * Xournal++
 *
 * Prints a document
 *
 * @author Xournal++ Team
 * https://github.com/xournalpp/xournalpp
 *
 * @license GNU GPLv2
 */

#pragma once

#include <gtk/gtk.h>

#include <XournalType.h>

class Document;
class Settings;
class SElement;

class PrintHandler
{
public:
	PrintHandler();
	virtual ~PrintHandler();

public:
	void print(Document* doc, int currentPage);

private:
	static void drawPage(GtkPrintOperation* operation, GtkPrintContext* context,
						int pageNr, PrintHandler* handler);
	static void requestPageSetup(GtkPrintOperation* operation,
								GtkPrintContext* context, gint pageNr,
								GtkPageSetup* setup, PrintHandler* handler);

private:
	XOJ_TYPE_ATTRIB;

	Document* doc;
};
